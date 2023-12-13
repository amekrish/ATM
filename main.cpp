#include <iostream>

using namespace std;
int choice;
bool finished;
int balance = 0;
int deposit;
int withdraw;
bool cumplido = false;
int useCheck;
int main() {
    while (cumplido == false) {
        cout << "Welcome to the ATM! Press 1 to check your balance, 2 to deposit, or 3 to withdraw" << endl;
        cin >> choice;
        if (choice == 1 || 2 || 3) {
            if (choice == 1) {
                cout << "Your balance is: " << balance << endl;
            }
            else if (choice == 2) {
                cout << "Enter deposit amount" << endl;
                cin >> deposit;
                balance += deposit;
                cout << "Your balance is now: " << balance << endl;
            }
            else if (choice == 3) {
                cout << "Enter withdrawal amount" << endl;
                cin >> withdraw;
                balance -= withdraw;
                cout << "Your balance is now: " << balance << endl;
            }
        }
        else if (choice != 1 && choice != 2 && choice != 3) {
            cout << "Please enter a valid command." << endl;
            cin >> choice;
        }
        cout << "Would you like to continue using this ATM? 1 for yes, 2 for no" << endl; {
            cin >> useCheck;
            if (useCheck == 1) {
                cumplido = false;
                cout << "Thank you for using this ATM!" << endl;
            }
            else if (useCheck == 2) {
                cumplido = true;
            }
        }
    }
}
