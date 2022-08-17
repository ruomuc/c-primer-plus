#include <iostream>
#include "person.h"

int main()
{
  Person one;
  Person two("zm");
  Person three("rm", "sam");

  one.Show();
  std::cout << std::endl;
  two.Show();
  std::cout << std::endl;
  three.Show();
  std::cout << std::endl;
  std::cout << std::endl;

  one.FormalShow();
  std::cout << std::endl;
  two.FormalShow();
  std::cout << std::endl;
  three.FormalShow();
}
