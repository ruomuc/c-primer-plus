#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
  x = a;
  y = b;
}

void Move::showmove() const
{
  using std::cout;

  cout << "x = " << x << "\n";
  cout << "y = " << y << "\n";
}

Move Move::add(const Move &m) const
{
  Move newmove(this->x + m.x, this->y + m.y);
  return newmove;
}

void Move::reset(double a, double b)
{
  this->x = a;
  this->y = b;
}
