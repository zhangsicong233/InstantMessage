#include "VerifyGrpcClient.h"

#include "ConfigMgr.h"

VerifyGrpcClient::VerifyGrpcClient() {
  auto& gCfgMgr = ConfigMgr::Inst();
  std::string host = gCfgMgr["VerifyServer"]["Host"];
  std::string port = gCfgMgr["VerifyServer"]["Port"];

  _pool.reset(new RPCConPool(5, host, port));
}

message::GetVerifyRsp VerifyGrpcClient::GetVerifyCode(std::string email) {
  grpc::ClientContext context;
  message::GetVerifyRsp reply;
  message::GetVerifyReq request;
  request.set_email(email);

  auto stub = _pool->getConnection();
  grpc::Status status = stub->GetVerifyCode(&context, request, &reply);
  if (status.ok()) {
    _pool->returnConnection(std::move(stub));

    return reply;
  } else {
    _pool->returnConnection(std::move(stub));

    reply.set_error(ErrorCodes::RPCFailed);

    return reply;
  }
}