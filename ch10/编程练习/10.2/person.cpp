#include <iostream>
#include <cstring>
#include "person.h"

Person::Person(const string &ln, const char *fn)
{
  lname = ln;
  strcpy(fname, fn);
}

void Person::Show() const
{
  using std::cout;

  cout << "name is : " << fname << " " << lname << "\n";
}

void Person::FormalShow() const
{
  using std::cout;

  cout << "name is : " << lname << " " << fname << "\n";
}
