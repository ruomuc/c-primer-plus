#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>

class complex
{
private:
  double real;
  double imaginary;

public:
  complex();
  complex(double r, double i);

  // 成员函数
  complex operator+(const complex &c) const;
  complex operator-(const complex &c) const;
  complex operator*(const complex &c) const;
  complex operator~() const;

  // 友元函数
  friend complex operator*(const double d, const complex &c);
  friend std::ostream &operator<<(std::ostream &os, const complex &c);
  friend std::istream &operator>>(std::istream &is, complex &c);
};

#endif