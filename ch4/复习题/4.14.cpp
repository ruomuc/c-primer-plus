#include <iostream>

int main()
{
  using std::cout;

  cout << (int *)"Home of the jolly bytes" << std::endl;  // 输出第一个字符的地址
  cout << (char *)"Home of the jolly bytes" << std::endl; // 输出整个字符串： Home of the jolly bytes

  // 约等于
  char a1[] = {"Home of the jolly bytes"};
  cout << (int *)a1 << std::endl;
}