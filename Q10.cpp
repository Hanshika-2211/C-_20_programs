#include <iostream>
using namespace std;

int main() {
    const int size = 2;  
    string strings[size];

    for (int i = 0; i < size; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        cin >> strings[i];
    }

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (strings[i] > strings[j]) {
                swap(strings[i], strings[j]);
            }
        }
    }
    cout << "\nSorted Strings in Alphabetical Order:\n";
    for (int i = 0; i < size; ++i) {
        cout << strings[i] << endl;
    }
    return 0;
}
