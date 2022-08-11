#include <iostream>
#include <string>

using namespace std;

struct donor
{
  string name;
  double fund;
};

int main()
{
  int donor_number;
  cout << "Enter donor's count: ";
  cin >> donor_number;
  cin.get();

  donor *donors = new donor[donor_number];

  cout << "Start input donors:" << endl;
  int idx = 0;
  while (idx < donor_number)
  {
    cout << "Enter name:";
    getline(cin, donors[idx].name);
    cout << "Enter fund:";
    cin >> donors[idx].fund;
    cin.get();
    idx++;
    cout << "Continue input: " << endl;
  }

  cout << "Grand Patrons:" << endl;
  for (int i = 0; i < donor_number; i++)
  {
    if (donors[i].fund > 10000)
    {
      cout << "name = " << donors[i].name << endl;
      cout << "fund = " << donors[i].fund << endl;
    }
  }
}