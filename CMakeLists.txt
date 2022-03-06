cmake_minimum_required(VERSION 3.22)
project (ranges)
set(CMAKE_CXX_STANDARD 20)


add_compile_options(-I/usr/local/opt/llvm/include)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I/usr/local/opt/llvm/include")


add_executable (main main.cpp)
#link_libraries("-L/usr/local/opt/llvm/lib")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -L/usr/local/opt/llvm/lib")
#target_compile_options("-I/usr/local/opt/llvm/include")

