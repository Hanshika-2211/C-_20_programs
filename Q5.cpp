#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "Largest number: " << num1 << endl;
        } else {
            cout << "Largest number: " << num3 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << "Largest number: " << num2 << endl;
        } else {
            cout << "Largest number: " << num3 << endl;
        }
    }
    return 0;
}