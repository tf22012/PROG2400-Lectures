#include <iostream>

using namespace std;
int main() {
    // Declare input string variable:
    string input;
    // Prompt user for input:
    cout << "Please enter some text:" << endl;
    // Record user input:
    getline(cin, input);
    // Repeat user input:
    cout << "You typed: " + input << endl;
    // Exit code (success):
    return 0;
}
