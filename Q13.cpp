#include <iostream>
using namespace std;

void swapChars(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(char* str, int start, int end) {
    if (start == end) {
        cout << str << endl;
        return;
    }
    for (int i = start; i <= end; ++i) {
        swapChars(str[start], str[i]);
        generatePermutations(str, start + 1, end);
        swapChars(str[start], str[i]);  // Backtrack
    }
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin >> input;
    cout << "Permutations:" << endl;
    generatePermutations(input, 0, strlen(input) - 1);
    return 0;
}
