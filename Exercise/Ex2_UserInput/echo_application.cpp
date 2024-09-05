//
// Created by Chris on 2024-09-05.
//
// NOTE: Organize headers alphabetically
#include "echo_application.h"
#include <iostream>
#include <string>


using namespace std;

int EchoApplication::run() {
    string input;
    const auto END = "end";
    const auto SUCCESS = 0;

    // Prompt user for input indefinitely till END keyword is detected:
    do {
        cout << "Please enter some text:" << endl;
        getline(cin, input);
        cout << "You typed: " << input << endl;
    } while (input != END);

    return SUCCESS;
};