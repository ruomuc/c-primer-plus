#include <iostream>
#include "stack.h"

Stack::Stack() // create an empty stack
{
  top = 0;
  total = 0.0;
}

bool Stack::isempty() const
{
  return top == 0;
}

bool Stack::isfull() const
{
  return top == MAX;
}

bool Stack::push(const Item &item)
{
  if (top < MAX)
  {
    items[top++] = item;
    return true;
  }
  else
    return false;
}

bool Stack::pop()
{
  if (top > 0)
  {
    Item i = items[--top];
    total += i.payment;
    std::cout << "total payment: " << total << "\n";
    return true;
  }
  else
    return false;
}
