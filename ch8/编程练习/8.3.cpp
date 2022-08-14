#include <iostream>
#include <string>

using namespace std;

void convert(string &);

int main()
{
  string s;

  cout << "Enter a string (q to quit): ";
  cin >> s;

  while (s != "q")
  {
    if (s == "")
    {
      continue;
    }
    convert(s);
    cout << s << endl;

    cout << "Next input string (q to quit): ";
    cin >> s;
  }
}

void convert(string &s)
{
  for (int i = 0; i < sizeof(s); i++)
  {
    s[i] = toupper(s[i]);
  }
}
