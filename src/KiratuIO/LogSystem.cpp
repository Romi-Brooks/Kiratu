//
// Created by romi on 10/15/23.
//

#include "../../lib/KiratuIO/LogSystem.hpp"

/*
    日志系统:
    [0] 信息
    [1] 警告
    [2] 错误
    [3] 第三方错误
        EN:
        Log System:
        [0] Info
        [1] Warning
        [2] Error
        [3] Third Party Error
 */

void LogSystem::Info(const std::string &message){
    std::cout << "[\033[32mInfo\033[0m]:" << message << std::endl;
};

void LogSystem::Warning(const std::string &message) {
    std::cout << "[\033[33mWarning\033[0m]:" << message << std::endl;
};

void LogSystem::Error(const std::string &message) {
    std::cout << "[\033[31mKiratu Error\033[0m]:" << message << std::endl;
};

void LogSystem::ThirdPartyError(const std::string &message) {
    std::cout << "[\033[31mThird Party Error\033[0m]:" << message << std::endl;
};

/*
 Log System Init:
 */
