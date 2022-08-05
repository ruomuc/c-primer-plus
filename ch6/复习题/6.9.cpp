#include <iostream>

int main()
{
  using namespace std;

  int line = 0;
  char ch;
  // while (cin.get(ch))
  // {
  //   if (ch == 'Q')
  //     break;
  //   if (ch != '\n')
  //     continue;
  //   line++;
  // }

  cin.get(ch);
  while (ch != 'Q')
  {
    line++;
    cin.get(ch);
  }

  cout << line << endl;
}