#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
    public:
      BankAccount(string owner, int balance);
      void deposit(int amount);
      void withdraw(int amount);
      string getOwner();
      int getBalance();

    private:
      const string owner;
      int balance;
};

#endif