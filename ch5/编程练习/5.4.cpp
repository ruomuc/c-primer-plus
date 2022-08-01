#include <iostream>

const int base = 100;

int main()
{
  using namespace std;

  int d = base, c = base, year = 0;

  do
  {
    year++;
    d = d + base * 0.1;
    c = c + (c * 0.05);
    cout << "Daphne: " << d << endl;
    cout << "Cleo: " << c << endl;
  } while (d >= c);

  cout << "After " << year << " years\n";

  cout << "Daphne: " << d << endl;
  cout << "Cleo: " << c << endl;
}