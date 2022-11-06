//error4.cpp – using exception classes
#include <iostream>
#include <cmath>
#include <stdexcept>
#include <string>

class base_bad_mean : public std::logic_error
{
private:
  double a, b;

public:
  base_bad_mean(double n1 = 0.0, double n2 = 0.0, std::string s = "mean error") : a(n1), b(n2), logic_error(s) {}
  virtual void mesg() = 0;
};

inline void base_bad_mean::mesg()
{
  std::cout << a << " " << b << std::endl;
}

class bad_hmean : public base_bad_mean
{
public:
  bad_hmean(double a = 0.0, double b = 0.0, const std::string what_arg = "HMean, Invalid argument ") : base_bad_mean(a, b, what_arg){};
  void mesg();
};

inline void bad_hmean::mesg()
{
  std::cout << "bad_hmean():" << std::endl;
  std::cout << what() << std::endl;
  base_bad_mean::mesg();
}

class bad_gmean : public base_bad_mean
{
public:
  bad_gmean(double a = 0.0, double b = 0.0, const std::string what_arg = "GMean, Invalid argument ") : base_bad_mean(a, b, what_arg){};
  void mesg();
};

inline void bad_gmean::mesg()
{
  std::cout << "bad_gmean():" << std::endl;
  std::cout << what() << std::endl;
  base_bad_mean::mesg();
}

// function prototypes
double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
  using std::cin;
  using std::cout;
  using std::endl;

  double x, y, z;

  cout << "Enter two numbers: ";
  while (cin >> x >> y)
  {
    try
    { // start of try block
      z = hmean(x, y);
      cout << "Harmonic mean of " << x << " and " << y
           << " is " << z << endl;
      cout << "Geometric mean of " << x << " and " << y
           << " is " << gmean(x, y) << endl;
      cout << "Enter next set of numbers <q to quit>: ";
    }                          // end of try block
    catch (base_bad_mean &bbm) // start of catch block
    {
      bbm.mesg();
      cout << "Try again.\n";
      break;
    }
  }
  cout << "Bye!\n";
  return 0;
}

double hmean(double a, double b)
{
  if (a == -b)
    throw bad_hmean(a, b);
  return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
  if (a < 0 || b < 0)
    throw bad_gmean(a, b);
  return std::sqrt(a * b);
}
