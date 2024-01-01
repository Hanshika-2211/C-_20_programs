#include <iostream>
using namespace std;

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    for (int i = 0; i < numRows; ++i) {
        int value = 1;
        for (int j = 0; j <= i; ++j) {
            cout << value << " ";
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
