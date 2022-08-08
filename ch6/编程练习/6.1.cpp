#include <iostream>
#include <cctype>

int main()
{
  using namespace std;

  char ch;
  cin.get(ch);
  while (ch != '@')
  {
    if (isupper(ch))
    {
      ch = tolower(ch);
    }
    else if (islower(ch))
    {
      ch = toupper(ch);
    }
    else if (isdigit(ch))
    {
      cin.get(ch);
      continue;
    }

    cout << ch;
    cin.get(ch);
  }

  return 0;
}