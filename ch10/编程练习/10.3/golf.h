#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
private:
  static const int LEN = 40;
  char m_fullname[LEN];
  int m_handicap;

public:
  Golf()
  {
    m_fullname[0] = '\0';
    m_handicap = 0;
  };
  Golf(const char fullname[], int handicap);
  void setgolf(const char *name, int hc);
  int setgolf();
  void handicap(int hc);
  void showgolf();
};

#endif
