#include <iostream>

int main()
{
  using namespace std;

  int j = 5;
  while (++j < 9)
    cout << j++ << endl;
}

// 会打印：
// 6
// 8