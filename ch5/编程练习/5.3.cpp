#include <iostream>

const int ArSize = 101;

int main()
{
  using namespace std;

  double sum = 0;

  double ch;

  while (cin >> ch)
  {
    if (ch == 0)
    {
      break;
    }

    sum += ch;
    cout << "sum = " << sum << endl;
  }

  cout << "end!" << endl;

  return 0;
}