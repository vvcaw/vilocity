cmake_minimum_required(VERSION 3.15)

project(vilocity CXX)

find_package(rpclib CONFIG REQUIRED)

set(CMAKE_CXX_STANDARD 17)

add_executable(vilocity main.cpp)

target_link_libraries(vilocity
    PRIVATE
        rpclib::rpc)
