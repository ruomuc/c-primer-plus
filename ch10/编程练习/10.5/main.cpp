#include "stack.h"

int main()
{
  customer customers[3] = {
      {"qwer", 12},
      {"asdf", 22},
      {"zxcv", 32}};

  Stack s;
  s.push(customers[0]);
  s.push(customers[1]);
  s.push(customers[2]);
  s.pop();
  s.pop();
  s.pop();
}
