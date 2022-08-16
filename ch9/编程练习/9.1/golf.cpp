#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc)
{
  strcpy(g.fullname, name);
  g.handicap = hc;
}

int setgolf(golf &g)
{
  using std::cin;
  using std::cout;

  char name[20];
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter handicap: ";
  cin >> g.handicap;
  cin.get();

  strcpy(g.fullname, name);
  return 1;
}

void handicap(golf &g, int hc)
{
  g.handicap = hc;
}

void showgolf(const golf &g)
{
  using std::cout;
  using std::endl;

  cout << "fullname = " << g.fullname << endl;
  cout << "handicap = " << g.handicap << endl;
}
