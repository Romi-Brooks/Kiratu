//
// Created by romi on 23-10-1.
//

#include "AudioBlocks.hpp"
AudioBlocks::AudioBlocks(const std::string &name) : BlockName(name) {
    BlockPan = 0;
    BlockVol = 80;
}
std::string AudioBlocks::Status() const {
    return BlockName + " -> Vol:" + std::to_string(BlockVol) + " Pan:" + std::to_string(BlockPan);
}

void AudioBlocks::SetName(const std::string &name) {
    BlockName = name;
}

void AudioBlocks::SetVol(int vol) {
    BlockVol = vol;
}

void AudioBlocks::SetPan(int pan) {
    BlockPan = pan;
}





