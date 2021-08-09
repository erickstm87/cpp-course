#include "../header/BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(string owner, int balance) {
    owner;
    this->balance = balance;
}

void BankAccount::deposit(int amount) {
    if(amount > 0) {
      this->balance += amount;
    }
    else {
        cout << "deposit more money" << endl;
    }
}
void BankAccount::withdraw(int amount) {
    if(this-> balance - amount < 0) {
        cout << "you don't have the funds" << endl;
    }
    else {
        this->balance -= amount;
    }
    
}
string BankAccount::getOwner() {
    return owner;
}
int BankAccount::getBalance() {
    return balance;
}