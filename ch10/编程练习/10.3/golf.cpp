#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf(const char fullname[], int handicap)
{
  strcpy(m_fullname, fullname);
  m_handicap = handicap;
}

void Golf::setgolf(const char *fullname, int hc)
{
  strcpy(m_fullname, fullname);
  m_handicap = hc;
}

int Golf::setgolf()
{
  using std::cin;
  using std::cout;

  char name[20];
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter handicap: ";
  cin >> m_handicap;
  cin.get();

  strcpy(m_fullname, name);
  return 1;
}

void Golf::handicap(int hc)
{
  m_handicap = hc;
}

void Golf::showgolf()
{
  using std::cout;
  using std::endl;

  cout << "fullname = " << m_fullname << endl;
  cout << "handicap = " << m_handicap << endl;
}
