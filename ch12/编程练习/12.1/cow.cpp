#include <iostream>
#include <cstring>

#include "cow.h"

Cow::Cow()
{
  name[0] = '\0';
  hobby = nullptr;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
  strcpy(name, nm);

  hobby = new char[strlen(ho) + 1];
  strcpy(hobby, ho);
  weight = wt;
}

Cow::Cow(const Cow &c)
{
  // name
  strcpy(name, c.name);
  // hobby
  delete[] hobby;
  hobby = new char[strlen(c.hobby) + 1];
  strcpy(hobby, c.hobby);
  // weight
  weight = c.weight;
}

Cow::~Cow()
{
  delete[] hobby;
}

Cow &Cow::operator=(const Cow &c)
{
  if (this == &c)
  {
    return *this;
  }

  // name
  strcpy(name, c.name);
  // hobby
  delete[] hobby;
  hobby = new char[strlen(c.hobby) + 1];
  strcpy(hobby, c.hobby);
  // weight
  weight = c.weight;

  return *this;
}

void Cow::ShowCow() const
{
  using std::cout;
  using std::endl;

  cout << "name = " << name << endl;
  cout << "hobby = " << hobby << endl;
}
