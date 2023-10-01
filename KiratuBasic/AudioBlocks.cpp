//
// Created by romi on 23-10-1.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class AudioBlocks {
public:
    // Constructor:
    AudioBlocks(const string &name) : BlockName(name) {
        BlockPan = 0;
        BlockVol = 80;
    }

    string Status() const {
        return BlockName + " -> Vol:" + std::to_string(BlockVol) + " Pan:" + std::to_string(BlockPan);
    }
    void SetVol(int vol) {
        BlockVol = vol;
    }
    void SetPan(int pan) {
        BlockPan = pan;
    }

private:
    string BlockName;
    int BlockVol;
    int BlockPan;
};

// 存放所有的音频块
vector<AudioBlocks> Blocks;

// Functions:
// Add AudioBlocks:
void AudioBlocksAdd() {
    string InputBlockName;
    cout << "Name of the new Audio Block:";
    cin >> InputBlockName;
    // 创建一个新的音频块对象并存储到向量中
//    // test
//    int a = 0;
//    while (a < 100) {
//        AudioBlocks userAudioBlock(InputBlockName);
//        Blocks.push_back(userAudioBlock);
//        cout << "Audio Block named " << InputBlockName << "was successfully created" << endl;
//        a++;
//    }
    AudioBlocks userAudioBlock(InputBlockName);
    Blocks.push_back(userAudioBlock);
    cout << "Audio Block named " << InputBlockName << "was successfully created" << endl;
}

// Set AudioBlocks Volume:
void AudioBlocksSetVol() {
    string InputBlockName;
    int InputBlockVol;
    cout << "Name of the Audio Block:";
    cin >> InputBlockName;
    cout << "Volume of the Audio Block:";
    cin >> InputBlockVol;
    for (AudioBlocks& block : Blocks) {
        if (block.Status() == InputBlockName) {
            block.SetVol(InputBlockVol);
        }
    }
}

// AudioBlocks SetPan:
void AudioBlocksSetPan() {
    string InputBlockName;
    int InputBlockPan;
    cout << "Name of the Audio Block:";
    cin >> InputBlockName;
    cout << "Pan of the Audio Block:";
    cin >> InputBlockPan;
    for (AudioBlocks& block : Blocks) {
        if (block.Status() == InputBlockName) {
            block.SetPan(InputBlockPan);
        }
    }
}

// AudioBlocks Status:
void AudioBlocksStatus() {
    cout << "Audio Blocks:" << endl;
    for (const AudioBlocks& block : Blocks) {
        cout << block.Status() << endl;
    }
}

// Delete AudioBlocks:
void AudioBlocksDelete() {
    string InputBlockName;
    cout << "Name of the Audio Block:";
    cin >> InputBlockName;
    for (int i = 0; i < Blocks.size(); i++) {
        if (Blocks[i].Status() == InputBlockName) {
            Blocks.erase(Blocks.begin() + i);
        }
    }
}