#include <string>
#include <algorithm>
#include <iostream>

bool is_reverse(std::string st);

int main()
{
  std::string st;
  std::cin >> st;

  std::cout << is_reverse(st);
}

bool is_reverse(std::string st)
{
  std::string st_reverse = st;
  reverse(st_reverse.begin(), st_reverse.end());

  return st == st_reverse;
}
