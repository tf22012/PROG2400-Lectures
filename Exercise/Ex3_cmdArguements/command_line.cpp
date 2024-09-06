//
// Created by Chris on 2024-09-06.
//

#include "command_line.h"
#include <iostream>

using namespace std;
int CommandLine::run(int argc, char* argv[]) {
    cout << "Command Line Exercise" << endl;

    const int SUCCESS = 0;
    int i = 0;

    // Print all arguments:
    while (i < argc){
        cout << argv[i] << endl;
        i++;
    }

    return SUCCESS;
}