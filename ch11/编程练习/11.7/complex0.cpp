#include "complex0.h"

complex::complex()
{
  real = imaginary = 0.0;
}

complex::complex(double r, double i)
{
  real = r;
  imaginary = i;
}

complex complex::operator+(const complex &c) const
{
  complex nc;
  nc.real = real + c.real;
  nc.imaginary = imaginary + c.imaginary;
  return nc;
}

complex complex::operator-(const complex &c) const
{
  complex nc;
  nc.real = real - c.real;
  nc.imaginary = imaginary - c.imaginary;
  return nc;
}

complex complex::operator*(const complex &c) const
{
  complex nc;
  nc.real = (real * c.real) - (imaginary * c.imaginary);
  nc.imaginary = (real * c.imaginary) + (imaginary * c.real);
  return nc;
}

complex complex::operator~() const
{
  complex nc;
  nc.real = real;
  nc.imaginary = -imaginary;
  return nc;
}

complex operator*(const double d, const complex &c)
{
  complex nc;
  nc.real = d * c.real;
  nc.imaginary = d * c.imaginary;
  return nc;
}

std::ostream &operator<<(std::ostream &os, const complex &c)
{
  os << "(" << c.real << "," << c.imaginary << "i)\n";
  return os;
}

std::istream &operator>>(std::istream &is, complex &c)
{
  std::cout << "real: ";
  if (!(is >> c.real))
  {
    return is;
  }

  std::cout << "imaginary: ";
  is >> c.imaginary;
  return is;
}
