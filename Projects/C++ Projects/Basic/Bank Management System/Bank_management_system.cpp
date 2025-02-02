// Autor : OM ROY
// Title: Bank Management System Programmed in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL

#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Bank {
    string name;
    double accountNumber, depositAmount, withdrawalAmount, balance, rate, timeDuration;
    char accountType;
public:
    void getdata();
    void saving_account();
    void current_account();
    void display();
};
void Bank::getdata(void) {
    cout << "Enter the name of Account Holder: ";
    cin.ignore(); 
    getline(cin, name);
    cout << "Enter the Account Number: ";
    cin >> accountNumber;
    cout << "Enter the Deposit Amount: ";
    cin >> depositAmount;
    cout << "Enter the Withdrawal Amount: ";
    cin >> withdrawalAmount;
    balance = 0000; // Initial balance
    cout << "Enter the Account Type (s for saving, c for current): ";
    cin >> accountType;
    cout << "Enter the Time Duration (in years): ";
    cin >> timeDuration;
    switch(accountType) {
        case 's':
            saving_account();
            break;
        case 'c':
            current_account();
            break;
        default:
            cout << "Invalid account type!" << endl;
    }
}
void Bank::saving_account(void) {
    rate = 7;
    balance = balance + depositAmount - withdrawalAmount;
    double finalBalance = balance * pow((1 + rate / 100), timeDuration);
    cout << "The Balance after the compound interest: " << finalBalance << endl;
    cout << "The Amount after withdrawal: " << balance << endl;
    cout << "You will not get a check book." << endl;
}
void Bank::current_account(void) {
    rate = 5;
    balance = balance + depositAmount - withdrawalAmount;
    cout << "The Balance: " << balance << endl;
    if (balance >= 3000) {
        cout << "The ledger balance: " << balance << endl;
    } else {
        cout << "The ledger balance: " << balance - 354 << " (including penalty)" << endl;
    }
    cout << "You will get a check book." << endl;
}
void Bank::display(void) {
    cout << "The Account Holder Name: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: " << balance << endl;
}
int main() {
    Bank account;
    account.getdata();
    account.display();
    return 0;
}

