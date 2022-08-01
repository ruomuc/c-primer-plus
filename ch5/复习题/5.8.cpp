// int x = (1, 024);
// 有效
// x的值为 20
// 因为 逗号表达式的值，是逗号右边的值。024以0开头，表示八进制，转换为10进制值为20

// y = 1, 024;
// 有效
// y的值为 1
// 因为赋值运算符的优先级 高于 逗号运算符。

#include <iostream>

int main()
{
  using namespace std;

  int x = (1, 024);
  cout << x << endl;

  int y;
  y = 1, 024;
  cout << y << endl;
}