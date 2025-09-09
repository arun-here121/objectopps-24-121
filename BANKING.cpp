#include <iostream>
using namespace std;

int main() {
    double balance = 0.0;
    int choice;
    double amount;

    do {
        // Menu
        cout << "\n--- Simple Banking System ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Deposit
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposited Rs " << amount << ". New Balance: Rs " << balance << endl;
                } else {
                    cout << "Invalid deposit amount!" << endl;
                }
                break;

            case 2: // Withdraw
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid withdrawal amount!" << endl;
                } else if (amount > balance) {
                    cout << "Error: Insufficient balance!" << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrew Rs " << amount << ". New Balance: Rs " << balance << endl;
                }
                break;

            case 3: // Balance Inquiry
                cout << "Current Balance: Rs " << balance << endl;
                break;

            case 4: // Exit
                cout << "Exiting... Thank you for banking with us!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter 1-4." << endl;
        }
    } while (choice != 4);

    return 0;
}

