#include "bankaccount.h"

int main()
{
  BankAccount ba("zm", "1997", 1000);
  ba.show();
  ba.deposit(199.12);
  ba.show();
  ba.withdraw(3.15);
  ba.show();
}
