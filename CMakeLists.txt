cmake_minimum_required(VERSION 3.24)
project(Kiratu)

set(CMAKE_CXX_STANDARD 17)

add_executable(Kiratu
        src/KiratuMain.cpp
        src/KiratuBasic/AudioBlocks.cpp
        lib/KiratuBasic/Core/AudioBlocks.hpp
        lib/KiratuIO/TerminalConsole.hpp
        src/KiratuIO/TerminalConsole.cpp
        src/KiratuBasic/AudioMixer.cpp
        lib/KiratuBasic/Core/AudioMixer.hpp
        src/KiratuBasic/AudioEffector.cpp
        lib/KiratuBasic/Core/AudioEffector.hpp
        src/KiratuPlugin/Plugin.cpp
        lib/KiratuPlugin/Plugin.hpp
        src/KiratuBasic/AudioBlocksActions.cpp
        lib/KiratuBasic/Core/AudioBlocksActions.hpp
        src/KiratuBasic/Core/CoreEngine.cpp
        src/KiratuBasic/Core/CoreEngine.hpp
        src/KiratuBasic/Core/AudioProcesser.cpp
        src/KiratuBasic/Core/AudioProcesser.hpp
        src/KiratuIO/LogSystem.cpp
        lib/KiratuIO/LogSystem.hpp
        src/KiratuIO/SystemInit.cpp
)
