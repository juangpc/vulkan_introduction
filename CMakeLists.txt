cmake_minimum_required(VERSION 3.20)

project(vulkan_tutorial)

set (LLVM_PATH /usr/local/opt/llvm/bin)
set (CMAKE_C_COMPILER             "${LLVM_PATH}/clang")
set (CMAKE_C_FLAGS                "-Wall -std=c99")
set (CMAKE_C_FLAGS_DEBUG          "-g")
set (CMAKE_C_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
set (CMAKE_C_FLAGS_RELEASE        "-O4 -DNDEBUG")
set (CMAKE_C_FLAGS_RELWITHDEBINFO "-O2 -g")

set (CMAKE_CXX_COMPILER             "${LLVM_PATH}/clang++")
set (CMAKE_CXX_FLAGS                "-Wall")
set (CMAKE_CXX_FLAGS_DEBUG          "-g")
set (CMAKE_CXX_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
set (CMAKE_CXX_FLAGS_RELEASE        "-O4 -DNDEBUG")
set (CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")

set (CMAKE_AR      "${LLVM_PATH}/llvm-ar")
set (CMAKE_LINKER  "${LLVM_PATH}/lld")
set (CMAKE_NM      "${LLVM_PATH}/llvm-nm")
set (CMAKE_OBJDUMP "${LLVM_PATH}/llvm-objdump")
set (CMAKE_RANLIB  "${LLVM_PATH}/llvm-ranlib")

add_subdirectory(src)
