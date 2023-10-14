cmake_minimum_required(VERSION 3.24)
project(Kiratu)

set(CMAKE_CXX_STANDARD 17)

add_executable(Kiratu.cpp
        KiratuBasic/AudioBlocks.cpp
        KiratuBasic/AudioBlocks.hpp
        KiratuIO/TerminalConsole.hpp
        KiratuIO/TerminalConsole.cpp
        Kiratu.cpp
        KiratuBasic/AudioMixer.cpp
        KiratuBasic/AudioMixer.hpp
        KiratuBasic/AudioEffector.cpp
        KiratuBasic/AudioEffector.hpp
        KiratuPlugin/Plugin.cpp
        KiratuPlugin/Plugin.hpp
        KiratuBasic/AudioBlocksActions.cpp
        KiratuBasic/AudioBlocksActions.hpp
        KiratuBasic/Core/CoreEngine.cpp
        KiratuBasic/Core/CoreEngine.hpp
        KiratuBasic/Core/AudioProcesser.cpp
        KiratuBasic/Core/AudioProcesser.hpp
        KiratuIO/LogSystem.cpp
        KiratuIO/LogSystem.hpp
)
