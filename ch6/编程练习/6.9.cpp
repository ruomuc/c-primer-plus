#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct donor
{
  string name;
  double fund;
};

int main()
{
  ifstream fin;
  string file_name;
  cout << "Enter the file name: ";
  getline(cin, file_name);
  fin.open(file_name);
  if (!fin.is_open())
  {
    cout << "Error to open file." << endl;
    exit(EXIT_FAILURE);
  }

  int donor_number;
  fin >> donor_number;
  if (donor_number < 0)
  {
    exit(EXIT_FAILURE);
  }
  donor *donors = new donor[donor_number];
  fin.get();

  int idx = 0;
  while (!fin.eof() && idx < donor_number)
  {
    getline(fin, donors[idx].name);
    fin >> donors[idx].fund;
    fin.get();
    idx++;
  }

  cout << "Grand Patrons: \n\n";
  for (int i = 0; i < donor_number; i++)
  {
    if (donors[i].fund > 10000)
    {
      cout << "name = " << donors[i].name << endl;
      cout << "fund = " << donors[i].fund << endl;
    }
  }
}