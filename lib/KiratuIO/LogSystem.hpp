//
// Created by romi on 10/15/23.
//

#ifndef KIRATU_LOGSYSTEM_HPP
#define KIRATU_LOGSYSTEM_HPP
#include <iostream>
#include <string>

class LogSystem {
public:
    void Initialize(){
        std::string message = "Kiratu Log System Init Success";
        Info(message);
    }

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
        [2] Kiratu Error
        [3] Third Party Error
 */
     void Info(const std::string& message);
     void Warning(const std::string& message);
     void Error(const std::string& message);
     void ThirdPartyError(const std::string& message);
};



#endif //KIRATU_LOGSYSTEM_HPP