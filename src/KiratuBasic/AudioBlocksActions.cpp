//
// Created by romi on 10/15/23.
//

#include "../../lib/KiratuBasic/Core/AudioBlocks.hpp"

// Functions:
// Add AudioBlocks:
void AudioBlocksAdd() {
    std::string InputBlockName;
    std::cout << "Name of the new Audio Block:";
    std::cin >> InputBlockName;
    // 创建一个新的音频块对象并存储到向量中
    AudioBlocks userAudioBlock(InputBlockName);
    Blocks.push_back(std::move(userAudioBlock));
    std::cout << "Audio Block named " << InputBlockName << " was successfully created" << std::endl;
}

// Rename AudioBlocks:
void AudioBlocksRename() {
    std::string AudioBlockName;
    std::string UserNewBlockName;
    std::cout << "Name of the Audio Block:";
    std::cin >> AudioBlockName;
    std::cout << "New Name of the Audio Block:";
    std::cin >> UserNewBlockName;
    for (AudioBlocks &block: Blocks) {
        if (block.Status() == AudioBlockName) {
            block.SetName(UserNewBlockName);
        }
    }
}

// Set AudioBlocks Volume:
void AudioBlocksSetVol() {
    std::string InputBlockName;
    int InputBlockVol;
    std::cout << "Name of the Audio Block:";
    std::cin >> InputBlockName;
    std::cout << "Volume of the Audio Block:";
    std::cin >> InputBlockVol;
    for (AudioBlocks& block : Blocks) {
        if (block.Status() == InputBlockName) {
            block.SetVol(InputBlockVol);
        }
    }
}

// AudioBlocks SetPan:
void AudioBlocksSetPan() {
    std::string InputBlockName;
    int InputBlockPan;
    std::cout << "Name of the Audio Block:";
    std::cin >> InputBlockName;
    std::cout << "Pan of the Audio Block:";
    std::cin >> InputBlockPan;
    for (AudioBlocks& block : Blocks) {
        if (block.Status() == InputBlockName) {
            block.SetPan(InputBlockPan);
        }
    }
}

// AudioBlocks Status:
void AudioBlocksStatus() {
    std::cout << "Audio Blocks:" << std::endl;
    for (const AudioBlocks& block : Blocks) {
        std::cout << block.Status() << std::endl;
    }
}

// Delete AudioBlocks:
void AudioBlocksDelete() {
    std::string InputBlockName;
    std::cout << "Name of the Audio Block:";
    std::cin >> InputBlockName;
    for (int i = 0; i < Blocks.size(); i++) {
        if (Blocks[i].Status() == InputBlockName) {
            Blocks.erase(Blocks.begin() + i);
        }
    }
}