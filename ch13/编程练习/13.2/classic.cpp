#include <cstring>

#include "classic.h"

Cd::Cd()
{
  performers = nullptr;
  label = nullptr;
  selections = 0;
  playtime = 0.0;
};

Cd::Cd(const Cd &cd)
{
  delete[] performers;
  performers = new char[strlen(cd.performers) + 1];
  strcpy(performers, cd.performers);

  delete[] label;
  label = new char[strlen(cd.label) + 1];
  strcpy(label, cd.label);

  selections = cd.selections;
  playtime = cd.playtime;
};

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
  performers = new char[strlen(s1) + 1];
  strcpy(performers, s1);

  label = new char[strlen(s2) + 1];
  strcpy(label, s2);

  selections = n;
  playtime = x;
};

Cd::~Cd()
{
  delete[] performers;
  delete[] label;
};

void Cd::Report() const
{
  using std::cout;
  using std::endl;

  cout << "performers = " << performers << endl;
  cout << "label = " << label << endl;
  cout << "selections = " << selections << endl;
  cout << "playtime = " << playtime << endl;
};

Cd &Cd::operator=(const Cd &d)
{
  if (this == &d)
  {
    return *this;
  }

  delete[] performers;
  performers = new char[strlen(d.performers) + 1];
  strcpy(performers, d.performers);

  delete[] label;
  label = new char[strlen(d.label) + 1];
  strcpy(label, d.label);

  selections = d.selections;
  playtime = d.playtime;

  return *this;
};

Classic::Classic() : Cd()
{
  main_performers = nullptr;
};

Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x) : Cd(s1, s2, n, x)
{
  main_performers = new char[strlen(s3) + 1];
  strcpy(main_performers, s3);
};

Classic::~Classic() 
{
  delete[] main_performers;
};

void Classic::Report() const
{
  using std::cout;
  using std::endl;

  Cd::Report();
  cout << "main_performers = " << main_performers << endl;
};

Classic &Classic::operator=(const Classic &c)
{
  if (this == &c)
  {
    return *this;
  }

  Cd::operator=(c);

  delete[] main_performers;
  main_performers = new char[strlen(c.main_performers) + 1];
  strcpy(main_performers, c.main_performers);

  return *this;
};
