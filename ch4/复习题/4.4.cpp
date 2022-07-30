#include <iostream>
#include <array>

int main()
{
  using std::array;
  using std::cout;

  array<int, 5> a1;

  a1[0] = 1;
  a1[1] = 3;
  a1[2] = 5;
  a1[3] = 7;
  a1[4] = 9;

  int even;

  even = a1[0] + a1[a1.size() - 1];

  cout << "sum of first and last element = " << even << std::endl;
}