#include <iostream>

int main()
{
  using namespace std;

  float salary = 0, tax;

  cout << "Enter you salary: ";
  cin >> salary;

  while (salary > 0)
  {

    if (salary <= 5000)
    {
      tax = 0;
    }
    else if (salary > 5000 && salary <= 15000)
    {
      tax = (salary - 5000) * 0.1;
    }
    else if (salary > 15000 && salary <= 35000)
    {
      tax = 10000 * 0.1 + (salary - 15000) * 0.15;
    }
    else if (salary > 35000)
    {
      tax = (salary - 35000) * 0.2;
    }

    cout << "tax = " << tax << endl;
    cout << "Enter you salary: ";
    cin >> salary;
  }

  cout << "Bye!" << endl;

  return 0;
}