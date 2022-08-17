#ifndef BANK_H_
#define BANK_H_

#include <iostream>
#include <string>

using std::string;

class BankAccount
{
private:
  string m_name;
  string m_account;
  double m_balance;

public:
  BankAccount(string name, string account, double balance);
  void show() const;
  void deposit(double d);
  void withdraw(double d);
};

#endif
