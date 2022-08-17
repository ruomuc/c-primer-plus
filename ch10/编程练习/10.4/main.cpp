#include "sales.h"

using SALES::Sales;

int main()
{
  double data[4] = {1.2, 2.2, 3.3, 4.4};
  Sales s_arr[2] = {Sales(), Sales(data, 4)};

  for (int i = 0; i < 2; i++)
  {
    s_arr[i].showSales();
  }
}
