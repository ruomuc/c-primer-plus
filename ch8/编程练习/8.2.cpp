#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
  string brand;
  double weight;
  int calories;
};

void set_candybar(CandyBar &, const string s = "Millennium", double w = 2.85, int c = 350);

int main()
{

  CandyBar cb = {};
  set_candybar(cb, "erke", 3.14, 200);

  cout << "brand = " << cb.brand << endl;
  cout << "weight = " << cb.weight << endl;
  cout << "calories = " << cb.calories << endl;
}

void set_candybar(CandyBar &candybar, const string s, double w, int c)
{
  candybar.brand = s;
  candybar.weight = w;
  candybar.calories = c;
}