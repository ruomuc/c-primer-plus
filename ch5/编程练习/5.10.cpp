#include <iostream>

int main()
{
  using namespace std;

  int count;

  cout << "Enter a number: ";

  cin >> count;

  for (int i = 1; i <= count; i++)
  {
    for (int j = 0; j < count - i; j++)
    {
      cout << ".";
    }
    for (int k = 0; k < i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}