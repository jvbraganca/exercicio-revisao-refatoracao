cmake_minimum_required(VERSION 3.17)
project(exercicio_revisao_refatoracao)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(exercicio_revisao_refatoracao
        Empregado.cpp
        Empregado.h
        Engenheiro.cpp
        Engenheiro.h
        main.cpp
        Vendedor.cpp
        Vendedor.h)
