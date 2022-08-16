#include <iostream>
#include "golf.h"

int main()
{
  golf gs[2];
  for (int i = 0; i < 2; i++)
  {
    setgolf(gs[i]);
  }

  for (int i = 0; i < 2; i++)
  {
    showgolf(gs[i]);
  }
}