#include <iostream>

double harmonic(double, double);

int main()
{
  using namespace std;

  double x, y;
  cout << "Enter two numbers: \n";
  cin >> x;
  cin >> y;

  while (x != 0 && y != 0)
  {
    cout << "The harmonic average is: " << harmonic(x, y) << endl;
    cin >> x;
    cin >> y;
  }
}

double harmonic(double x, double y)
{
  return 2.0 * x * y / (x + y);
}