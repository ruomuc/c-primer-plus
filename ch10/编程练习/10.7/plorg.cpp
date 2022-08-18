#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char name[20], int ci)
{
  strcpy(m_name, name);
  m_ci = ci;
}

void Plorg::set_ci(int ci)
{
  m_ci = ci;
}

void Plorg::show() const
{
  using std::cout;
  
  cout << "name = " << m_name << "\n";
  cout << "CI = " << m_ci << "\n";
}