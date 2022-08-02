#include <iostream>
#include <string>
#include <array>

using namespace std;

struct car
{
  string producer;
  int year;
};

int main()
{
  int car_num;

  cout << "How many cars?";
  cin >> car_num;
  cin.get();

  car *cars = new car[car_num];

  for (int i = 0; i < car_num; ++i)
  {
    cout << "Enter producer :";
    getline(cin, cars[i].producer);

    cout << "Enter date :";
    cin >> cars[i].year;
    cin.get();
  }

  for (int i = 0; i < car_num; ++i)
  {
    cout << "producer:" << cars[i].producer << endl;
    cout << "year:" << cars[i].year << endl;
  }

  return 0;
}