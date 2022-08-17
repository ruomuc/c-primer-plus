#include <iostream>
#include "bankaccount.h"

BankAccount::BankAccount(string name, string account, double balance)
{
  m_name = name;
  m_account = account;
  m_balance = balance;
}

void BankAccount::show() const
{
  using std::cout;

  cout << "name = " << m_name << "\n";
  cout << "account = " << m_account << "\n";
  cout << "balance = " << m_balance << "\n";
}

void BankAccount::deposit(double amount)
{
  m_balance += amount;
}

void BankAccount::withdraw(double amount)
{
  m_balance -= amount;
}
