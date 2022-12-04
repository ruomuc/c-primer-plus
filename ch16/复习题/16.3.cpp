#include <string>
#include <cctype>
#include <algorithm>
#include <iostream>

void to_upper(std::string &st)
{
  std::transform(st.begin(), st.end(), st.begin(), toupper);
}

int main()
{
  std::string st = "hello world";
  to_upper(st);
  std::cout << st;
}
