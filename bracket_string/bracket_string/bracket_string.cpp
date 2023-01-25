#include<iostream>
#include<string>
using namespace std;

int bracket_match(string bracket_string) {
    int open = 0;
    int close = 0;
    for (int i = 0; i < bracket_string.size(); i++) {
        if (bracket_string[i] == '(') {
            open++;
        }

        else if (bracket_string[i] == ')') {
            close++;
        }
    }

    if (open == close)
        return 1;
    else
        return 0;

}

int main() {

    string str = "((())";
    cout << bracket_match(str) << endl;

    return 0;

}