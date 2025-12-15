#pragma once

#include "const.h"

class HttpConnection;

using HttpHandler = std::function<void(std::shared_ptr<HttpConnection>)>;

class LogicSystem : public Singleton<LogicSystem> {
  friend Singleton<LogicSystem>;

 public:
  ~LogicSystem();

  void RegGet(std::string url, HttpHandler handler);
  bool HandleGet(std::string path, std::shared_ptr<HttpConnection> connection);
  void RegPost(std::string url, HttpHandler handler);
  bool HandlePost(std::string path, std::shared_ptr<HttpConnection> connection);

 private:
  LogicSystem();

  std::map<std::string, HttpHandler> _post_handlers;
  std::map<std::string, HttpHandler> _get_handlers;
};