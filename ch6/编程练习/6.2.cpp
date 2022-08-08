#include <iostream>
#include <array>
#include <cctype>

int main()
{
  using namespace std;

  array<double, 10> donations;

  double sum = 0, average = 0;

  int counter = 0;
  double input;
  cin >> input;

  while (input != 0 && counter < 10)
  {
    donations[counter++] = input;
    sum += input;
    cin >> input;
  }
  average = sum / counter;

  int bigger_count = 0;
  for (int i = 0; i < 10; i++)
  {
    if (donations[i] > average)
    {
      bigger_count++;
    }
  }

  cout << "Average = " << average << endl;
  cout << "Bigger average count = " << bigger_count << endl;

  return 0;
}