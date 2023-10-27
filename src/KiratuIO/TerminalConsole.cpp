//
// Created by romi on 23-10-1.
//

#include <iostream>
#include "string"
#include "../../lib/KiratuBasic/Core/AudioBlocksActions.hpp"
#include "../../lib/KiratuIO/LogSystem.hpp"

// Init LogSystem:
void InitLogSystem() {
    LogSystem KiratuTerminalConsole;
    KiratuTerminalConsole.Initialize("Kiratu's Terminal Console Log System has Initialized");
}

// Welcome Message:
void CustomMessagePrinter(const std::string& message, int width, int height, int FillNumber) {
    // 中间部分
    for (int i = 0; i < height - 2; i++) {
        std::cout << "|";
        for (int j = 0; j < width - 2; j++) {
            if (i == (height - 2) / 2 && j == (width - 2 - message.length()) / 2) {
                std::cout << message;
                j += message.length() - FillNumber;
            } else {
                 std::cout << " ";
            }
        }
         std::cout << "|" <<  std::endl;
    }
}
void WelcomeMessage() {
        int width = 100; // 框的宽度
        int height = 5; // 框的高度

        std::string welcome = "Welcome to \033[95m Kiratu!\033[0m";
        std::string information = "A lightweight Digital Audio Workstation (DAW) developed in \033[32mC++ language!\033[0m";
        std::string version = "\033[95m Kiratu Cream Cake\033[0m \033[31mBeta Version\033[0m 0.0.1";

    // Print Top Border:
    for (int i = 0; i < width; i++) {
         std::cout << "=";
    }
     std::cout <<  std::endl;

    // Print Middle Part:
    CustomMessagePrinter(welcome, width, height, 10);
    CustomMessagePrinter(information, width, height, 10);
    CustomMessagePrinter(version, width, height, 19);

    // Print Bottom Border:
    for (int i = 0; i < width; i++) {
         std::cout << "=";
    }
     std::cout <<  std::endl;

    // Print The Help Message:
    std::cout << "This is Kiratu's Terminal Console. Type \033[1m\"action.help()\"\033[0m for more information.\033[1m\"action.quit()\"\033[0m to exit the KTC(Kiratu's Terminal Console)." << std::endl;
}
void CommandHelper() {
    std::cout << "Commands Helper:" << std::endl
              << "-\"\033[1maction.quit()\033[0m\"" << ", It's a exit command." << std::endl
              << "-\"\033[1maction.help()\033[0m\"" << ", Get the more info about the KTC(Kiratu's Terminal Console)'s Commands."<< std::endl
              << "-\033[1m\"action.add(\033[36mName\033[0m\033[1m)\"\033[0m" <<",to add an Audio Block." << std::endl
              << "-\033[1m\"action.del(\033[36mName\033[0m\033[1m)\"\033[0m" << ",to delete an Audio Block." << std::endl
              << "-\033[1m\"action.setpan(\033[36mName\033[0m\033[1m)\"\033[0m" << ",to set the pan of the selected Audio Block." << std::endl
              << "-\033[1m\"action.setvol(\033[36mName\033[0m\033[1m)\"\033[0m" << ",to set the volume of the selected Audio Block." << std::endl
              << "-\"\033[1m\033[1maction.status(\033[36mName\033[0m\033[1m)\033[0m\"" << ",to obtain the status information of the selected Audio Block." << std::endl
              << "Or, You can run " <<"\"\033[1maction.status()\033[0m\"" << " to obtain the status information of all Audio Blocks." << std::endl;

}

// Command Loops:
void TerminalConsole() {
    WelcomeMessage();
    while (true) {
        // Print the prompt:
        std::cout << "\033[1m\033[33mKiratu's Terminal Console\033[0m >> ";
        std::string command;
        std::cin >> command;
        if (command == "action.exit()") {
            break;
        }
        else if (command == "action.help()") {
            CommandHelper();
        }
        else if (command == "action.add()") {
            AudioBlocksAdd();
        }
        else if (command == "action.setvol()") {
            AudioBlocksSetVol();
        }
        else if (command == "action.setpan()") {
            AudioBlocksSetPan();
        }
        else if (command == "action.status()") {
            AudioBlocksStatus();
        }
//        else if (command == "action.del()") {
//            AudioBlocksDelete();
//        }
        else if (command == "action.rename()") {
            AudioBlocksRename();
        }

        else {
            std::cout << "Command not found." << std::endl;
        }
    }
}

void TerminalConsoleDebug() {
    WelcomeMessage();


    while (true) {
        // Print the prompt:
        std::cout << "\033[1m\033[33mKiratu's Terminal Console \033[31m[Debug]\033[0m >> ";
        std::string command;
        std::cin >> command;
        if (command == "exit()") {
            break;
        }
        else if (command == "help()") {
            CommandHelper();
        }
        else if (command == "add()") {
            AudioBlocksAdd();
        }
        else if (command == "setvol()") {
            AudioBlocksSetVol();
        }
        else if (command == "setpan()") {
            AudioBlocksSetPan();
        }
        else if (command == "status()") {
            AudioBlocksStatus();
        }
//        else if (command == "del()") {
//            AudioBlocksDelete();
//        }
        else if (command == "rename()") {
            AudioBlocksRename();
        }

        else {
            std::cout << "Command not found." << std::endl;
        }
    }
}