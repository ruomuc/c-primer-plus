#include "move.h"

int main()
{
  Move m(1.1, 2.2);
  m.showmove();
  Move m2(2.2, 3.3);
  Move m3 = m.add(m2);
  m3.showmove();
}
