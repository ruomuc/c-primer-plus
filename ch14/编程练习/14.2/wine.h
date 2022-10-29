#ifndef WINE_H_
#define WINE_H_

#include <iostream>
#include <valarray>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::valarray;

typedef valarray<int> ArrayInt;

template <class T1, class T2>
class Pair
{
private:
  T1 a;
  T2 b;

public:
  Pair(){};
  Pair(const T1 &aval, const T2 &bval) : a(aval), b(bval){};

  T1 first() const { return a; };
  T2 second() const { return b; };

  T1 &first();
  T2 &second();
};

typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private PairArray, private string
{
private:
  int year;

public:
  Wine(const char *l, int y);
  Wine(const char *l, int y, const int yr[], const int bot[]);

  void GetBottles();
  const string &Label() const;
  int Sum() const;
  void Show();
};

#endif