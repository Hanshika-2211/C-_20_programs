#include <iostream>
using namespace std;

bool isAlphabet(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

char toLower(char ch) {
    return (ch >= 'A' && ch <= 'Z') ? (ch + ('a' - 'A')) : ch;
}

int main() {
    string input, cleanedInput;
    cout << "Enter a string: ";
    getline(cin, input);
 for (char ch : input) {
        if (isAlphabet(ch)) {
            cleanedInput += toLower(ch);
        }
    }

    bool isPalindrome = true;
    int length = cleanedInput.length();
    for (int i = 0; i < length / 2; ++i) {
        if (cleanedInput[i] != cleanedInput[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "The given string is a palindrome." << endl;
    } else {
        cout << "The given string is not a palindrome." << endl;
    }
    return 0;
}