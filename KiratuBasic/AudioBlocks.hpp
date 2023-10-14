//
// Created by romi on 23-10-1.
//
#ifndef KIRATU_AUDIOBLOCKS_HPP
#define KIRATU_AUDIOBLOCKS_HPP
#include <iostream>
#include <string>
#include <vector>

class AudioBlocks {
public:
    // Constructor Function,the name of the Audio Block is required,and more use the explicit to avoid the implicit conversion
    // Maybe more parameters will be added in the future, so leave a note here for now
    // 构造函数，音频块的名称为必填项，多使用显式，避免隐式转换
    // 未来可能会添加更多参数，所以现在先在这里留个注释
    explicit AudioBlocks(const std::string &name);

    // Get the status of the Audio Block
    // Use nodiscard to avoid the return value being ignored
    // The return value may be improved in the Log system in the future.
    // 获取音频块的状态
    // 使用nodiscard避免返回值被忽略
    // 未来可能会在Log系统中对返回值进行完善
    [[nodiscard]] std::string Status() const;

    void SetName(const std::string &name);

    void SetVol(int vol);

    void SetPan(int pan);



private:
    std::string BlockName;
    int BlockVol;
    int BlockPan;
};

// Store all Audio Blocks
// Avoid multiple definitions, use extern
// 存放所有的音频块
// 避免多次定义,使用extern
extern std::vector<AudioBlocks> Blocks;

#endif //KIRATU_AUDIOBLOCKS_HPP
