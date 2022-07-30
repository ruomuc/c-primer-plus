#include <array>
#include <iostream>

int main()
{
  using std::array;
  using std::cout;

  array<float, 5> a1 = {1.2, 2.3, 3.4, 5.6};
  cout << a1[2] << std::endl;
}