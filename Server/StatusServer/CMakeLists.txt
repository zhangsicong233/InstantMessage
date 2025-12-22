cmake_minimum_required(VERSION 3.16)
project(StatusServer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 查找Boost组件
find_package(Boost 1.70 REQUIRED COMPONENTS system filesystem)

# 查找Protobuf和gRPC
find_package(Protobuf REQUIRED)
find_package(gRPC REQUIRED)

# 查找jsoncpp
find_package(PkgConfig REQUIRED)
pkg_check_modules(JSONCPP jsoncpp REQUIRED)
# 查找hiredis
pkg_check_modules(HIREDIS hiredis REQUIRED)
# 查找 MySQL Connector/C++
find_path(MYSQLCPPCONN_INCLUDE_DIR mysql_connection.h PATH_SUFFIXES mysql)
find_library(MYSQLCPPCONN_LIBRARY NAMES mysqlcppconn)
if (NOT MYSQLCPPCONN_INCLUDE_DIR OR NOT MYSQLCPPCONN_LIBRARY)
    message(FATAL_ERROR "MySQL Connector/C++ not found")
endif()

# 添加可执行文件
add_executable(statusserver
    StatusServer.cpp
    StatusServiceImpl.cpp
    ConfigMgr.cpp
    AsioIOContextPool.cpp
    RedisMgr.cpp
    MysqlDao.cpp
    MysqlMgr.cpp
    message.grpc.pb.cc
    message.pb.cc
)

# 包含目录
target_include_directories(statusserver PRIVATE .)
target_include_directories(statusserver SYSTEM PRIVATE ${JSONCPP_INCLUDE_DIRS})
target_include_directories(statusserver SYSTEM PRIVATE ${HIREDIS_INCLUDE_DIRS})
target_include_directories(statusserver SYSTEM PRIVATE ${Protobuf_INCLUDE_DIRS})
target_include_directories(statusserver SYSTEM PRIVATE ${gRPC_INCLUDE_DIRS})
target_include_directories(statusserver SYSTEM PRIVATE ${MYSQLCPPCONN_INCLUDE_DIR})

# 链接库
target_link_libraries(statusserver PRIVATE Boost::boost Boost::system Boost::filesystem)
target_link_libraries(statusserver PRIVATE ${JSONCPP_LIBRARIES})
target_link_libraries(statusserver PRIVATE ${HIREDIS_LIBRARIES})
target_link_libraries(statusserver PRIVATE ${Protobuf_LIBRARIES})
target_link_libraries(statusserver PRIVATE gRPC::grpc gRPC::grpc++)
target_link_libraries(statusserver PRIVATE ${MYSQLCPPCONN_LIBRARY})

# 线程库
find_package(Threads REQUIRED)
target_link_libraries(statusserver PRIVATE Threads::Threads)

# 定义宏
target_compile_definitions(statusserver PRIVATE BOOST_ASIO_STANDALONE=0)

# 复制配置文件到构建目录
configure_file(config.ini config.ini COPYONLY)