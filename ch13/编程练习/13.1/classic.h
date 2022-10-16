#ifndef CLASSIC_H_
#define CLASSIC_H_

#include <iostream>

class Cd
{
private:
  char performers[50];
  char label[20];
  int selections;  // number of selections
  double playtime; // playing time in minutes
public:
  Cd(const char *s1, const char *s2, int n, double x);
  Cd(const Cd &d);
  Cd();
  virtual ~Cd(){};
  virtual void Report() const; // reports all CD data
  virtual Cd &operator=(const Cd &d);
};

class Classic : public Cd
{
private:
  char main_performers[50];

public:
  Classic();
  Classic(const char *s1, const char *s2, const char *s3, int n, double x);
  ~Classic(){};
  void Report() const;
  Classic &operator=(const Classic &c);
};

#endif