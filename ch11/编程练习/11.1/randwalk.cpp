// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime>   // time() prototype
#include <fstream>

#include "vect.h"

int main()
{
  using namespace std;
  using VECTOR::Vector;

  ofstream fout;
  fout.open("randwalk.txt");

  srand(time(0)); // seed random-number generator
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  unsigned long steps = 0;
  double target;
  double dstep;
  cout << "Enter target distance (q to quit): ";
  while (cin >> target)
  {
    cout << "Enter step length: ";
    if (!(cin >> dstep))
      break;

    fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
    while (result.magval() < target)
    {
      fout << steps << ": " << result << endl; // 这里的 result 使用 Vector重载的 << 运算符函数输出内容。

      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      steps++;
    }
    cout << "After " << steps << " steps, the subject "
                                 "has the following location:\n";
    cout << result << endl;

    fout << "After " << steps << " steps, the subject "
                                 "has the following location:\n";

    result.polar_mode();
    cout << " or\n"
         << result << endl;
    cout << "Average outward distance per step = "
         << result.magval() / steps << endl;

    fout << " or\n"
         << result << endl;
    fout << "Average outward distance per step = "
         << result.magval() / steps << endl;

    steps = 0;
    result.reset(0.0, 0.0);
    cout << "Enter target distance (q to quit): ";
  }
  cout << "Bye!\n";
  cin.clear();
  while (cin.get() != '\n')
    continue;
  return 0;
}
