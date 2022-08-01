
#include <iostream>

int main()
{
  using namespace std;

  int j;
  for (j = 0; j < 11; j += 3)
    cout << j;
  cout << endl
       << j << endl;
}

// 会打印：
// 0369
// 12