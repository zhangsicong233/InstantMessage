#pragma once

#include <grpcpp/grpcpp.h>

#include "ConfigMgr.h"
#include "Singleton.hpp"
#include "const.h"
#include "message.grpc.pb.h"
#include "message.pb.h"

class StatusConPool {
 public:
  StatusConPool(size_t poolSize, std::string host, std::string port)
      : _poolSize(poolSize), _host(host), _port(port), _b_stop(false) {
    for (size_t i = 0; i < _poolSize; ++i) {
      std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel(
          host + ":" + port, grpc::InsecureChannelCredentials());

      _connections.push(message::StatusService::NewStub(channel));
    }
  }

  ~StatusConPool() {
    std::lock_guard<std::mutex> lock(_mutex);
    Close();

    while (!_connections.empty()) {
      _connections.pop();
    }
  }

  std::unique_ptr<message::StatusService::Stub> getConnection() {
    std::unique_lock<std::mutex> lock(_mutex);
    _cond.wait(lock, [this] {
      if (_b_stop) {
        return true;
      }

      return !_connections.empty();
    });

    // 如果停止则直接返回空指针
    if (_b_stop) {
      return nullptr;
    }

    auto context = std::move(_connections.front());
    _connections.pop();

    return context;
  }

  void returnConnection(std::unique_ptr<message::StatusService::Stub> context) {
    std::lock_guard<std::mutex> lock(_mutex);
    if (_b_stop) {
      return;
    }

    _connections.push(std::move(context));

    _cond.notify_one();
  }

  void Close() {
    _b_stop = true;

    _cond.notify_all();
  }

 private:
  std::atomic<bool> _b_stop;
  size_t _poolSize;
  std::string _host;
  std::string _port;
  std::queue<std::unique_ptr<message::StatusService::Stub>> _connections;
  std::mutex _mutex;
  std::condition_variable _cond;
};

class StatusGrpcClient : public Singleton<StatusGrpcClient> {
  friend class Singleton<StatusGrpcClient>;

 public:
  ~StatusGrpcClient() {}

  message::GetChatServerRsp GetChatServer(int uid);
  // message::LoginRsp Login(int uid, std::string token);

 private:
  StatusGrpcClient();

  std::unique_ptr<StatusConPool> _pool;
};
