cmake_minimum_required(VERSION 3.1)
project(Banco)

set(CMAKE_CXX_STANDARD 11)

add_executable(src/main.cpp Fontes/Banco.cpp Fontes/Conta.cpp)
