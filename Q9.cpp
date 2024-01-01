#include <iostream>
using namespace std;

int main() {
    int N;
    double sum = 0, term = 1, factorial = 1;
    cout << "Enter the value of N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        term = static_cast<double>(i) / factorial;
        sum += term;
    }
    cout << "Sum of the series: " << sum << endl;
    return 0;
}
