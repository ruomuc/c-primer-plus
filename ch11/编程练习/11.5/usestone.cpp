#include <iostream>
#include "stonewt.h"

int main()
{
  Stonewt st1(123.1);
  std::cout << "st1 = " << st1 << std::endl;

  Stonewt st2(200, 1.23);
  std::cout << "st2 = " << st2 << std::endl;

  Stonewt st3 = st1 + st2;
  std::cout << "st3 = " << st3 << std::endl;

  Stonewt st4 = st1 + st2;
  std::cout << "st4 = " << st4 << std::endl;

  Stonewt st5 = st4 * 2.2;
  std::cout << "st5 = " << st5 << std::endl;

  st5.Set_Mode(Stonewt::STONE);
  std::cout << "st5 = " << st5 << std::endl;
  st5.Set_Mode(Stonewt::FLOAT_POUND);
  std::cout << "st5 = " << st5 << std::endl;
}
