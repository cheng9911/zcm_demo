cmake_minimum_required(VERSION 3.11)
project(zcm_demo)
set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_LIST_DIR}/zcm-1.1.5/build/examples/examples/types )


# message( WARNING  ${CMAKE_CURRENT_LIST_DIR})

add_executable(pub src/pub.cpp)
target_link_libraries(   pub  /home/sun/zcm_demo/zcm-1.1.5/build/zcm/libzcm.so )

