#include <iostream>

using namespace std;

int main() {
    int n;

    // Input: Number of rows
    cout << "Enter the number of rows (should be an odd number): ";
    cin >> n;

    // Display the upper half of the diamond pattern
    for (int i = 1; i <= n; ++i) {
        // Spaces before the numbers
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        // Increasing numbers
        for (int j = i; j <= 2 * i - 1; ++j) {
            cout << j;
        }

        // Decreasing numbers
        for (int j = 2 * i - 2; j >= i; --j) {
            cout << j;
        }

        cout << endl;
    }

    // Display the lower half of the diamond pattern
    for (int i = n - 1; i >= 1; --i) {
        // Spaces before the numbers
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        // Increasing numbers
        for (int j = i; j <= 2 * i - 1; ++j) {
            cout << j;
        }

        // Decreasing numbers
        for (int j = 2 * i - 2; j >= i; --j) {
            cout << j;
        }

        cout << endl;

    }
    return 0;
}
