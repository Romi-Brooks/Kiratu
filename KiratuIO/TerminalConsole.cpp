//
// Created by romi on 23-10-1.
//

#include "../KiratuBasic/AudioBlocks.h"
#include <iostream>
#include "string"
using namespace std;

// Welcome Message:
void PrintMessage(string message, int width, int height, int FillNumber) {
    // 中间部分
    for (int i = 0; i < height - 2; i++) {
        cout << "|";
        for (int j = 0; j < width - 2; j++) {
            if (i == (height - 2) / 2 && j == (width - 2 - message.length()) / 2) {
                cout << message;
                j += message.length() - FillNumber;
            } else {
                 cout << " ";
            }
        }
         cout << "|" <<  endl;
    }
}
void WelecomeMessage() {
        int width = 100; // 框的宽度
        int height = 5; // 框的高度

        string welcome = "Welcome to \033[95m Kiratu!\033[0m";
        string infomaition = "A lightweight Digital Audio Workstation (DAW) developed in \033[32mC++ language!\033[0m";
        string version = "\033[95m Kiratu Cream Cake\033[0m \033[31mBeta Version\033[0m 0.0.1";

    // Print Top Border:
    for (int i = 0; i < width; i++) {
         cout << "=";
    }
     cout <<  endl;

    // Print Middle Part:
    PrintMessage(welcome, width, height, 10);
    PrintMessage(infomaition, width, height, 10);
    PrintMessage(version, width, height, 19);

    // Print Bootom Border:
    for (int i = 0; i < width; i++) {
         cout << "=";
    }
     cout <<  endl;

    // Print The Help Message:
    cout << "This is Kiratu's Terminal Console. Type \033[1m\"action.help()\"\033[0m for more information.\033[1m\"action.quit()\"\033[0m to exit the KTC(Kiratu's Terminal Console)." << endl;
}

// Command Loops:
void TerminalConsole() {
    WelecomeMessage();
    while (true) {
        cout << "\033[1m\033[33mKiratu's Terminal Console\033[0m >> ";
        string command;
        cin >> command;
        if (command == "action.exit()") {
            break;
        }
        else if (command == "action.help()") {
            cout << "Commands Helper:" << endl
                 << "-\"\033[1maction.quit()\033[0m\"" << ", It's a exit command." << endl
                 << "-\"\033[1maction.help()\033[0m\"" << ", Get the more info about the KTC(Kiratu's Terminal Console)'s Commands."<< endl
                 << "-\033[1m\"action.add(\033[36mName\033[0m\033[1m)\"\033[0m" <<",to add an Audio Block." << endl
                 << "-\033[1m\"action.del(\033[36mName\033[0m\033[1m)\"\033[0m" << ",to delete an Audio Block." << endl
                 << "-\033[1m\"action.setpan(\033[36mName\033[0m\033[1m)\"\033[0m" << ",to set the pan of the selected Audio Block." << endl
                 << "-\033[1m\"action.setvol(\033[36mName\033[0m\033[1m)\"\033[0m" << ",to set the volume of the selected Audio Block." << endl
                 << "-\"\033[1m\033[1maction.status(\033[36mName\033[0m\033[1m)\033[0m\"" << ",to obtain the status information of the selected Audio Block." << endl
                 << "Or, You can run " <<"\"\033[1maction.status()\033[0m\"" << " to obtain the status information of all Audio Blocks." << endl;

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
        else if (command == "action.del()") {
            AudioBlocksDelete();
        }
        else {
            cout << "Command not found." << endl;
        }
    }
}

void TerminalConsoleDebug() {

}