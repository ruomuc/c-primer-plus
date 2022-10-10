#include <iostream>
#include "stack.h"

using std::cout;

int main()
{
  Stack *st = new Stack(3);
  cout << "isEmpty: " << st->isempty() << "\n";
  st->push(Item(120));
  st->push(Item(121));
  st->push(Item(122));
  cout << "isEmpty: " << st->isempty() << "\n";
  cout << "ifFull: " << st->isfull() << "\n";
  st->show();

  Item i;
  st->pop(i);
  cout << "i = " << i << "\n";
  st->show();

  Stack *st2 = new Stack(3);
  st2 = st;
  st2->show();
}
