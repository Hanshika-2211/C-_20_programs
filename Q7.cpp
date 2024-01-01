#include <iostream>
using namespace std;

int main() {
    int number, sum;

    cout << "Enter a number: ";
    cin >> number;

    do {
        sum = 0;
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        number = sum;
    } while (number >= 10);

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
