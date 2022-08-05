#include <iostream>
using namespace std;
int main()
{
  char ch;
  int ct1, ct2;

  ct1 = ct2 = 0;
  while ((ch = cin.get()) != '$')
  {
    cout << ch;
    ct1++;
    if (ch = '$')
      ct2++;
    cout << ch;
  }
  cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
  return 0;
}

// 每个字符后面都会跟一个 $，if(ch=‘$’)是一个赋值语句，且结果永远为true。