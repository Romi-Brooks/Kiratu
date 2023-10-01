cmake_minimum_required(VERSION 3.24)
project(Kiratu)

set(CMAKE_CXX_STANDARD 17)

add_executable(Kiratu.cpp
        KiratuBasic/AudioBlocks.cpp
        KiratuBasic/AudioBlocks.h
        KiratuIO/TerminalConsole.h
        KiratuIO/TerminalConsole.cpp
        Kiratu.cpp)
