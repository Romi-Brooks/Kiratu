//
// Created by romi on 23-10-1.
//

#include <utility>

#include "../../lib/KiratuBasic/Core/AudioBlocks.hpp"
AudioBlocks::AudioBlocks(std::string name) : BlockName(std::move(name)) {
    BlockPan = 0;
    BlockVol = 80;
}

std::string AudioBlocks::GetBlockName() const {
    return BlockName;
}

std::string AudioBlocks::Status() const {
    return BlockName + " -> Vol:" + std::to_string(BlockVol) + " Pan:" + std::to_string(BlockPan);
}

void AudioBlocks::SetName(const std::string &name) {
    BlockName = name;
}

void AudioBlocks::SetVol(int vol) {
    BlockVol = vol;
    std::cout << "Volume of the Audio Block:" << BlockVol << "Now." << std::endl;
}

void AudioBlocks::SetPan(int pan) {
    BlockPan = pan;
}

/*
这里用于存放所有的音频块
EN:This is used to store all audio blocks
 */
std::vector<AudioBlocks> Blocks;



