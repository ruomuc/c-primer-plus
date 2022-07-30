#include <iostream>
#include <array>

int main()
{
  using std::array;
  using std::cout;

  array<float, 10> treacle = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0};
  float *tp = &treacle[0];

  cout << "first = " << *tp << std::endl;
  cout << "last = " << *(tp + sizeof(treacle) - 2) << std::endl;
}