#include <iostream>
#include "sales.h"

namespace SALES
{
  using std::cin;
  using std::cout;
  using std::endl;

  void setSales(Sales &s, const double ar[], int n)
  {
    if (n < 4)
    {
      n = 4;
    }

    for (int i = 0; i < n; i++)
    {
      s.sales[i] = ar[i];
    }

    double max = 0, min = s.sales[0], sum = 0;
    for (int i = 0; i < n; i++)
    {
      if (max < s.sales[i])
      {
        max = s.sales[i];
      }
      if (min > s.sales[i])
      {
        min = s.sales[i];
      }
      sum += s.sales[i];
    }
    s.max = max;
    s.min = min;
    cout << "sum = " << sum;
    s.average = sum / n;
  }

  void setSales(Sales &s)
  {
    for (int i = 0; i < QUARTERS; i++)
    {
      cout << "Enter a double value: ";
      while (!(cin >> s.sales[i]))
      {
        cout << "invalid value, continue: ";
        cin.clear();
        while (cin.get() != '\n')
          continue;
      }
    }

    double max = 0, min = s.sales[0], sum = 0;
    for (int i = 0; i < QUARTERS; i++)
    {
      if (max < s.sales[i])
      {
        max = s.sales[i];
      }
      if (min > s.sales[i])
      {
        min = s.sales[i];
      }
      sum += s.sales[i];
    }
    s.max = max;
    s.min = min;
    s.average = sum / QUARTERS;
  }

  void showSales(const Sales &s)
  {
    cout << "average = " << s.average << endl;
    cout << "max = " << s.max << endl;
    cout << "min = " << s.min << endl;
  }
}
