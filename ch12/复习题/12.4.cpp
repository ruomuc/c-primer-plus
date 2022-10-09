#include <iostream>
#include <cstring>

using std::ostream;

class nifty
{
private:
  // data
  char personality[40];
  int talents;

public:
  // methods
  nifty();
  nifty(char *s);
  friend ostream &operator<<(ostream &os, const nifty &n);
};

nifty::nifty()
{
  personality[0] = '\0';
  talents = 0;
}

nifty::nifty(char *s)
{
  strcpy(personality, s);
  talents = 0;
}

ostream &operator<<(ostream &os, const nifty &n)
{
  os << n.personality;
  return os;
}
