#include <cstring>

#include "classic.h"

Cd::Cd()
{
  performers[0] = '\0';
  label[0] = '\0';
  selections = 0;
  playtime = 0.0;
};

Cd::Cd(const Cd &cd)
{
  strcpy(performers, cd.performers);
  strcpy(label, cd.label);
  selections = cd.selections;
  playtime = cd.playtime;
};

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
  strcpy(performers, s1);
  strcpy(label, s2);
  selections = n;
  playtime = x;
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

  strcpy(performers, d.performers);
  strcpy(label, d.label);
  selections = d.selections;
  playtime = d.playtime;

  return *this;
};

Classic::Classic() : Cd()
{
  main_performers[0] = '\0';
};

Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x) : Cd(s1, s2, n, x)
{
  strcpy(main_performers, s3);
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
  strcpy(main_performers, c.main_performers);

  return *this;
};