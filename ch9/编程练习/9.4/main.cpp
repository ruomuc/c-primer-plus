#include <iostream>
#include "sales.h"

using std::cout;
using std::endl;

using SALES::Sales;
using SALES::setSales;
using SALES::showSales;

int main()
{
  Sales s_arr[2];
  double data[4] = {1.2, 2.2, 3.3, 4.4};
  setSales(s_arr[0], data, 4);

  setSales(s_arr[1]);

  for (int i = 0; i < 2; i++)
  {
    cout << i << endl;
    showSales(s_arr[i]);
  }
}
