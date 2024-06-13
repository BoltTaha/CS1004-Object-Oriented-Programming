#include <iostream>
using namespace std;

class bankAccount {
private:
    int accno;
    double balance;

public:
    bankAccount(int accno = 0, double balance = 0.0) {
        this->accno = accno;
        this->balance = balance;
    }

    void setAccountNumber(int accno) {
        this->accno = accno;
    }

    int getAccountNumber() {
        return accno;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount." << endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
            return;
        }
        double check = balance - amount;
        if (check < 0) {
            cout << "Insufficient funds. Current balance: " << balance << endl;
        } else {
            balance -= amount;
        }
    }

    void printInfo() {
        cout << "Account Number: " << accno << endl;
        cout << "Total Balance: " << balance << endl;
    }
};

class savingsAccount : public bankAccount {
private:
    float interestRate;

public:
    savingsAccount(int accno = 0, double balance = 0.0, float interestRate = 0.0) : bankAccount(accno, balance) {
        this->interestRate = interestRate;
    }

    void setInterestRate(float rate) {
        interestRate = rate;
    }

    float getInterestRate() {
        return interestRate;
    }

    void postInterest() {
        float interest = getBalance() * (interestRate / 100);
        deposit(interest);
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
            return;
        }
        double check = getBalance() - amount;
        if (check < 0) {
            cout << "Insufficient funds. Current balance: " << getBalance() << endl;
        } else {
            bankAccount::withdraw(amount);
        }
    }

    void printInfo() {
        bankAccount::printInfo();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    int acc;
    double dep, with;
    cout << "Enter the Account Number: ";
    cin >> acc;
    cout << "Enter the Amount that you want to Deposit: ";
    cin >> dep;
    bankAccount acc1(acc, dep);
    cout << "Enter the amount that you want to withdraw: ";
    cin >> with;
    acc1.withdraw(with);
    cout << "Account 1 Details:" << endl;
    acc1.printInfo();

    cout << "\nEnter the Account Number: ";
    cin >> acc;
    cout << "Enter the Amount that you want to Deposit: ";
    cin >> dep;
    float intr;
    cout << "Enter the Interest rate: ";
    cin >> intr;
    savingsAccount savingsAcc1(acc, dep, intr);
    cout << "Enter the amount that you want to withdraw: ";
    cin >> with;
    savingsAcc1.withdraw(with);
    savingsAcc1.postInterest();
    cout << "\nSavings Account 1 Details:" << endl;
    savingsAcc1.printInfo();

    return 0;
}

