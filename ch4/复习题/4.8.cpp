#include <iostream>

struct fish
{
  double weight;
  double length;
};

int main()
{
  using namespace std;

  fish f1 = {1.2, 180};

  cout << "weight = " << f1.weight << " length = " << f1.length << endl;
}
