#include <iostream>
#include <string>

using namespace std;

// function prototype
void strcount(string str);

int main()
{
  string input;
  char next;

  cout << "Enter a line:\n";
  cin >> input;
  while (cin)
  {

    strcount(input);
    cout << "Enter next line (empty line to quit):\n";
    cin >> input;
  }
  cout << "Bye\n";
  return 0;
}

void strcount(string str)
{
  using namespace std;
  static int total = 0; // static local variable
  int count = 0;        // automatic local variable

  cout << "\"" << str << "\" contains ";
  while (count < str.length()) // go to end of string
    count++;
  total += count;
  cout << count << " characters\n";
  cout << total << " characters total\n";
}
