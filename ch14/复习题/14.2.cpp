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

class Gloam
{
private:
  int glip;
  Frabjous fb;

public:
  Gloam(int g = 0, const char *s = "C++");
  Gloam(int g, const Frabjous &f);
  void tell();
};

Gloam::Gloam(int g, const char *s) : glip(g), fb(s) {}

Gloam::Gloam(int g, const Frabjous &f) : glip(g), fb(f) {}

void Gloam::tell()
{
  fb.tell();
  cout << glip << endl;
}