#include <iostream>
#include "sales.h"

using SALES::Sales;

void Sales::compute(int n)
{
  double max = 0, min = m_sales[0], sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (max < m_sales[i])
    {
      max = m_sales[i];
    }
    if (min > m_sales[i])
    {
      min = m_sales[i];
    }
    sum += m_sales[i];
  }
  max_ = max;
  min_ = min;
  average_ = sum / n;
}

Sales::Sales()
{
  using std::cin;
  using std::cout;

  for (int i = 0; i < QUARTERS; i++)
  {
    cout << "Enter a double value: ";
    while (!(cin >> m_sales[i]))
    {
      cout << "invalid value, continue: ";
      cin.clear();
      while (cin.get() != '\n')
        continue;
    }
  }
  compute(QUARTERS);
}

Sales::Sales(const double ar[], int n)
{
  if (n < 4)
  {
    n = 4;
  }

  for (int i = 0; i < n; i++)
  {
    m_sales[i] = ar[i];
  }
  compute(n);
}

void Sales::showSales() const
{
  using std::cout;
  using std::endl;

  cout << "average = " << average_ << endl;
  cout << "max = " << max_ << endl;
  cout << "min = " << min_ << endl;
}
