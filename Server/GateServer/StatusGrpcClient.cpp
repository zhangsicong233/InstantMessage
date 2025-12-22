#include "StatusGrpcClient.h"

StatusGrpcClient::StatusGrpcClient() {
  auto& gCfgMgr = ConfigMgr::Inst();
  std::string host = gCfgMgr["StatusServer"]["Host"];
  std::string port = gCfgMgr["StatusServer"]["Port"];

  std::cout << "StatusGrpcClient: Connecting to StatusServer at " << host << ":" << port << std::endl;

  _pool.reset(new StatusConPool(5, host, port));
}

message::GetChatServerRsp StatusGrpcClient::GetChatServer(int uid) {
  grpc::ClientContext context;
  message::GetChatServerRsp reply;
  message::GetChatServerReq request;

  request.set_uid(uid);
  auto stub = _pool->getConnection();
  if (!stub) {
    std::cout << "StatusGrpcClient: Failed to get connection from pool" << std::endl;
    reply.set_error(ErrorCodes::RPCFailed);
    return reply;
  }
  
  grpc::Status status = stub->GetChatServer(&context, request, &reply);
  Defer defer([&stub, this]() { _pool->returnConnection(std::move(stub)); });
  if (status.ok()) {
    return reply;
  } else {
    std::cout << "StatusGrpcClient: gRPC call failed: " << status.error_code()
              << ": " << status.error_message() << std::endl;
    reply.set_error(ErrorCodes::RPCFailed);

    return reply;
  }
}