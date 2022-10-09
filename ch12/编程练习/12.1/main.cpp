#include "cow.h"

int main()
{
  Cow *c = new Cow("zm", "cn", 1.1);
  c->ShowCow();

  Cow c2;
  c2 = *c;
  c2.ShowCow();
}
