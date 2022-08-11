#include <iostream>

int replace(char *str, char c1, char c2);

int main()
{
  char str[] = "qwertqwetr";
  int c = replace(str, 'q', 'z');
  std::cout << "replace count =" << c << std::endl;
}

int replace(char *str, char c1, char c2)
{
  int counter = 0;

  while (*str)
  {
    if (*str == c1)
    {
      *str = c2;
      counter++;
    }
    str++;
  }

  return counter;
}