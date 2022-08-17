#include "golf.h"

int main()
{
  const char name[] = "zm";
  Golf gs[2] = {Golf(name, 12), Golf()};
  gs[1].setgolf();

  for (int i = 0; i < 2; i++)
  {
    gs[i].showgolf();
  }
}
