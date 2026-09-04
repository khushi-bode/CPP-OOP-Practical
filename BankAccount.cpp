#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    float balance;

public:
    // Constructor
    BankAccount(int accNo, string accName, float initialBalance)
    {
        accountNumber = accNo;
        name = accName;
        balance = initialBalance;
        cout << "\nAccount created successfully!\n";
    }

    // User-defined function for deposit
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited: Rs. " << amount << endl;
    }

    // User-defined function for withdrawal
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn: Rs. " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // User-defined function to display account details
    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: Rs. " << balance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "\nDestructor called. Account object destroyed." << endl;
    }
};

int main()
{
    int accountNumber;
    string name;
    float initialBalance, depositAmount, withdrawAmount;

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount b1(accountNumber, name, initialBalance);

    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    b1.deposit(depositAmount);

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    b1.withdraw(withdrawAmount);

    b1.display();

    return 0;
}