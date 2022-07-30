#include <iostream>
#include <array>
#include <vector>

int main()
{
  using std::array;
  using std::cin;
  using std::cout;
  using std::vector;

  int input;
  cin >> input;

  int *a1 = new int[input];
  delete[] a1;

  vector<int> v1(input);
  cout << "v1 length = " << v1.size() << std::endl;

  return 0;
}