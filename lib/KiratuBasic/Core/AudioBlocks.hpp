//
// Created by romi on 23-10-1.
//
#ifndef KIRATU_AUDIOBLOCKS_HPP
#define KIRATU_AUDIOBLOCKS_HPP
#include <iostream>
#include <string>
#include <vector>
#include "../../KiratuIO/LogSystem.hpp"

class AudioBlocks {
public:
    /*
    构造函数，音频块的名称为必填项，多使用显式，避免隐式转换
    未来可能会添加更多参数，所以现在先在这里留个注释
        EN:
        Constructor Function,the name of the Audio Block is required,and more use the explicit to avoid the implicit conversion,
        Maybe more parameters will be added in the future, so leave a note here for now.
    */
    explicit AudioBlocks(std::string name, int BlockVol, int BlockPan, LogSystem& logSystem);

    // 复制构造函数
    AudioBlocks(const AudioBlocks& other) {
        // 复制成员变量
    }

    // 复制赋值运算符
    AudioBlocks& operator=(const AudioBlocks& other) {
        if (this != &other) {
            // 复制成员变量
        }
        return *this;
    }

    /*
    获取音频块的名称
    使用nodiscard避免返回值被忽略
    未来可能会在Log系统中对返回值进行完善
        EN:
        Get the name of the Audio Block
        Use nodiscard to avoid the return value being ignored
        Maybe the return value will be improved in the Log system in the future
    */
    [[nodiscard]] std::string GetBlockName() const;
    /*
    获取音频块的状态
    使用nodiscard避免返回值被忽略
    未来可能会在Log系统中对返回值进行完善
        EN:
        Get the status of the Audio Block
        Use nodiscard to avoid the return value being ignored
        Maybe the return value will be improved in the Log system in the future
    */
    [[nodiscard]] std::string Status() const;

    /*
    设置音频块的名称
        EN:
        Set the name of the Audio Block
     */
    void SetName(const std::string &name);

    /*
    设置音频块的音量
        EN:
        Set the volume of the Audio Block
     */
    void SetVol(int vol);

    /*
    设置音频块的声相
        EN:
        Set the pan of the Audio Block
     */
    void SetPan(int pan);



private:
//    用于对象初始化
    LogSystem logSystem;
    std::string BlockName;
    int BlockVol{};
    int BlockPan{};
};

    /*
    存放所有的音频块
    避免多次定义,使用extern
        EN:
        Store all audio blocks
        Avoid multiple definitions, use extern
    */
extern std::vector<AudioBlocks> Blocks;

#endif //KIRATU_AUDIOBLOCKS_HPP
