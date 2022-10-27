#include "iostream"

using std::cout;
using std::endl;

class Frabjous
{
private:
  char fab[20];

public:
  Frabjous(const char *s = "C++") { strcpy(fab, s); }
  virtual void tell() { cout << fab; }
};

class Gloam : private Frabjous
{
private:
  int glip;

public:
  Gloam(int g = 0, const char *s = "C++");
  Gloam(int g, const Frabjous &f);
  void tell();
};

Gloam::Gloam(int g, const char *s) : glip(g), Frabjous(s) {}

Gloam::Gloam(int g, const Frabjous &f) : glip(g), Frabjous(f) {}

void Gloam::tell()
{
  Frabjous::tell();
  cout << glip << endl;
}
