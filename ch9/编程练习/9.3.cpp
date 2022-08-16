#include <iostream>
#include <cstring>

struct chaff
{
  char dross[20];
  int slag;
};

static char buffer[100];

int main()
{
  using std::cout;
  using std::endl;

  chaff *c1, *c2;
  chaff *cs[] = {c1, c2};

  new (buffer) double[2];
  c1 = new (buffer) chaff;
  strcpy(c1->dross, "qwer");
  c1->slag = 11;

  c2 = new (buffer + 20 + sizeof(int)) chaff;
  strcpy(c2->dross, "asdf");
  c2->slag = 22;

  cout << "c1: address = " << c1 << " value =" << c1->dross << " " << c1->slag << endl;
  cout << "c2: address = " << c2 << " value =" << c2->dross << " " << c2->slag << endl;
}
