#include <iostream>

int main()
{
  using namespace std;

  double ted = 1.22;

  double *tp = &ted;

  cout << "ted address = " << tp << endl;
  cout << "ted value = " << *tp << endl;
}