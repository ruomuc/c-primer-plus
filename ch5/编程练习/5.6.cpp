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

  array<array<int, 12>, 3> sales;

  for (int i = 0; i < sales.size(); ++i)
  {
    for (int j = 0; j < sales[i].size(); ++j)
    {
      cout << "Enter " << i + 1 << " year " << moths[j] << " moth :";
      cin >> sales[i][j];
    }
  }

  int sum = 0;
  for (int i = 0; i < sales.size(); ++i)
  {
    for (int j = 0; j < sales[i].size(); ++j)
    {
      sum += sales[i][j];
    }
  }

  cout << "Total sales = " << sum << endl;
}