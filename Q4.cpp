#include <iostream>
using namespace std;

int main() {
    float balance = 1000.0;
    int choice;
    float amount;

    do {
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance: ₹" << balance << endl;
                break;

            case 2:
                cout << "Enter the amount to deposit: ₹";
                cin >> amount;
                balance += amount;
                cout << "Deposit successful. New balance: ₹" << balance << endl;
                break;

            case 3:
                cout << "Enter the amount to withdraw: ₹";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient funds!\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: ₹" << balance << endl;
                }
                break;

            case 4:
                cout << "Exiting program. Thank you!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}

