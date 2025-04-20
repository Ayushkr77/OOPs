#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
    }

    // Getter for accountHolderName
    string getAccountHolderName() const {
        return accountHolderName;
    }

    // Setter for accountHolderName
    void setAccountHolderName(const string& name) {
        accountHolderName = name;
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
        }
    }
};

int main() {
    // Creating an object of BankAccount
    BankAccount account("John Doe", 5000);

    // Using getter to access private data
    cout << "Account Holder: " << account.getAccountHolderName() << endl;
    cout << "Balance: " << account.getBalance() << endl;

    // Modifying balance using deposit method
    account.deposit(1500);
    cout << "Updated Balance: " << account.getBalance() << endl;

    // Trying to withdraw an amount
    account.withdraw(2000);
    cout << "Balance after Withdrawal: " << account.getBalance() << endl;

    return 0;
}
