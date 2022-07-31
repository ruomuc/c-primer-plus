#include <iostream>

using namespace std;

struct pizza
{
  char company[20];
  double diameter;
  double weight;
};

int main()
{
  pizza p1;

  cout << "Enter company: ";
  cin.getline(p1.company, 10);
  cout << "Enter diameter: ";
  cin >> p1.diameter;
  cout << "Enter weight: ";
  cin >> p1.weight;

  cout << p1.company << endl;
  cout << p1.diameter << endl;
  cout << p1.weight << endl;
}