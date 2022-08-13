#include <iostream>

long long factorial(int);

int main()
{
  using namespace std;

  int n;
  cout << "Enter a number: ";
  cin >> n;
  while (n > 0)
  {
    cout << "The number " << n << " factorial = " << factorial(n) << endl;
    cout << "Continue enter a number: ";
    cin >> n;
  }

  return 0;
}

long long factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}