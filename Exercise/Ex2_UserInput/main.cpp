// Description: This is a simple program that will ask the user for
// input and echo it back to them. The program will end upon the detection
// the string "end".

#include "echo_application.h"

int main() {
    // Updated to Best Practice:
    return EchoApplication::run();
}

/*
    // My Oringal Code:
    while (true){ // Best Practice: (input != END)
        // Prompt user for input:
        cout << "Please enter some text:" << endl;
        // Record user input:
        getline(cin, input);
        // Check for END keyword:
        if (input == END){
             // END keyword detected break loop:
             break;
        }else{
            // Repeat user input:
            cout << "You typed: " + input << endl;
        }
    }
    */