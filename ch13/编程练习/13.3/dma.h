#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class ABC
{
public:
  virtual ~ABC(){};
  virtual void view()
  {
    std::cout << "This is ABC View().\n";
  }
};

// Base Class Using DMA
class baseDMA : public ABC
{
private:
  char *label;
  int rating;

public:
  baseDMA(const char *l = "null", int r = 0);
  baseDMA(const baseDMA &rs);
  virtual ~baseDMA();
  virtual void view();
  baseDMA &operator=(const baseDMA &rs);
  friend std::ostream &operator<<(std::ostream &os,
                                  const baseDMA &rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public baseDMA
{
private:
  enum
  {
    COL_LEN = 40
  };
  char color[COL_LEN];

public:
  lacksDMA(const char *c = "blank", const char *l = "null",
           int r = 0);
  lacksDMA(const char *c, const baseDMA &rs);
  virtual void view();
  friend std::ostream &operator<<(std::ostream &os,
                                  const lacksDMA &rs);
};
// derived class with DMA
class hasDMA : public baseDMA
{
private:
  char *style;

public:
  hasDMA(const char *s = "none", const char *l = "null",
         int r = 0);
  hasDMA(const char *s, const baseDMA &rs);
  hasDMA(const hasDMA &hs);
  ~hasDMA();
  virtual void view();
  hasDMA &operator=(const hasDMA &rs);
  friend std::ostream &operator<<(std::ostream &os,
                                  const hasDMA &rs);
};

#endif