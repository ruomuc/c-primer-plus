#include <iostream>

void set_golf_score(double[10]);
void show_golf_score(double[10]);
double compute_average(double[10]);

int main()
{
  using namespace std;

  double golfs[10];
}

void set_golf_score(double golfs[10])
{
  using namespace std;
  for (int i = 0; i < 10; i++)
  {
    cout << "Enter " << i << " score: \n";
    cin >> golfs[i];
  }
}