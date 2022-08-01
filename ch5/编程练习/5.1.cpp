#include <iostream>

int main()
{
  using namespace std;

  int start, end;

  cout << "Enter start value : ";
  cin >> start;

  cout << "Enter end value : ";
  cin >> end;

  int sum = 0;
  for (; start <= end; ++start)
  {
    sum += start;
  }
  cout << sum << endl;
}