cmake_minimum_required(VERSION 3.17)
project(BlueCoin)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(ASTSerialLib AudioSerialLib)
add_executable(BlueCoin main.cpp BlueCoinController.cpp BlueCoinController.h)

target_link_libraries(BlueCoin PUBLIC AudioSerialLib ASTSerialLib)


