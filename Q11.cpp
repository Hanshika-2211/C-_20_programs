#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; ++i) {
       cin >> arr[i];
    }

    bool isSorted = true;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }
    cout << (isSorted ? "The array is sorted in ascending order." : "The array is not sorted in ascending order.") << endl;
    return 0;
}
