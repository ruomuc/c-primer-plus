#include <iostream>

void show(char *, int n = 0);

int main()
{
  char s[] = "qwer";
  show(s);
  show(s);
  show(s, 1);
}

void show(char *s, int n)
{
  using namespace std;

  static int func_counter = 0;
  func_counter++;

  if (n > 0)
  {
    for (int i = 0; i < func_counter; i++)
    {
      cout << s;
    }
  }
  else
  {
    cout << s;
  }
  cout << "\nend.." << endl;
}