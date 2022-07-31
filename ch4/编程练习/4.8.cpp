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
  pizza *p1 = new pizza;

  cout << "Enter diameter: ";
  cin >> p1->diameter;
  cin.get();

  cout << "Enter company: ";
  cin.getline(p1->company, 20);

  cout << "Enter weight: ";
  cin >> p1->weight;

  cout << "Enter company: ";
  cin.getline(p1->company, 20);

  cout << p1->company << endl;
  cout << p1->diameter << endl;
  cout << p1->weight << endl;

  delete p1;
}