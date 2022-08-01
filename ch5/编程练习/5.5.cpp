#include <iostream>
#include <string>
#include <array>

int main()
{
  using namespace std;

  const array<string, 12> moths = {
      "JAN",
      "FEB",
      "MAR",
      "APR",
      "MAY",
      "JUN",
      "JUL",
      "AUG",
      "SEP",
      "OCT",
      "NOV",
      "DEC",
  };

  array<int, 12> sales;

  for (int i = 0; i < moths.size(); ++i)
  {
    cout << "Enter " << moths[i] << ": ";
    cin >> sales[i];
  }

  int sum = 0;
  for (int i = 0; i < sales.size(); ++i)
  {
    sum += sales[i];
  }
  cout << "Total sales = " << sum << endl;
}