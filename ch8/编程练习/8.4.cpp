#include <iostream>
using namespace std;
#include <cstring>

struct stringify
{
  char *str;
  int ct;
};

void set(stringify &, const char[]);
void show(const stringify &, int n = 1);
void show(const char[], int n = 1);

int main()
{
  stringify beany;
  char testing[] = "Reality isn't what it used to be.";

  set(beany, testing);

  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done!");

  return 0;
}

void set(stringify &str, const char testing[])
{
  strcpy(str.str, testing);
}

void show(const stringify &str, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << str.str << endl;
  }
}

void show(const char *str, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << str << endl;
  }
}