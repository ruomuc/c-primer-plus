#include <iostream>

double add(double, double);
double substract(double, double);
double calculate(double, double, double (*)(double, double));

int main()
{
  double (*pf[2])(double, double) = {add, substract};

  for (int i = 0; i < 2; i++)
  {
    std::cout << "The answer of " << i << " function = " << calculate(2.5, 1.23, pf[i]) << std::endl;
  }
}

double add(double a, double b)
{
  return a + b;
}

double substract(double a, double b)
{
  return a - b;
}

double calculate(double a, double b, double (*fn)(double, double))
{
  return (*fn)(a, b);
}
