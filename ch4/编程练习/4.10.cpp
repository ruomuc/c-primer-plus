#include <iostream>
#include <array>

int main()
{
  using namespace std;

  array<double, 3> scores;

  cout << "Enter first: ";
  cin >> scores[0];

  cout << "Enter Second: ";
  cin >> scores[1];

  cout << "Enter Third: ";
  cin >> scores[2];

  double average = (scores[0] + scores[1] + scores[2]) / 3;

  cout << "Average: " << average;
}