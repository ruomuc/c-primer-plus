#include <iostream>
#include <string>

using namespace std;

void iqoute(int x)
{
  cout << "\"" << x << "\"";
}

void iqoute(double d)
{
  cout << "\"" << d << "\"";
}

void iqoute(string s)
{
  cout << "\"" << s << "\"";
}
