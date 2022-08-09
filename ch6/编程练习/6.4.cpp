#include <iostream>

const int strsize = 40;
const int usersize = 5;

struct bop
{
  char fullname[strsize]; // real name
  char title[strsize];    // job title
  char bopname[strsize];  // secret BOP name
  int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
  using namespace std;

  bop bops[usersize] =
      {
          {"Wimp Macho", "Programmer", "MIPS", 0},
          {"Raki Rhodes", "Junior Programmer", "", 1},
          {"Celia Laiter", "", "MIPS", 2},
          {"HOPPY Hipman", "Analyst Trainee", "", 1},
          {"Pat Hand", "", "LOOPY", 2},
      };

  cout << "Benevolent Order of Programmers Report\n"
          "a. display by name    b. display by title\n"
          "c. display by bopname d. display by preference "
          "q. quit\n";

  cout << "Enter you choice: ";

  char choice;
  cin.get(choice);
  while (choice != 'q')
  {
    switch (choice)
    {
    case 'a':
      for (int i = 0; i < usersize; i++)
      {
        cout << bops[i].fullname << endl;
      }
      break;
    case 'b':
      for (int i = 0; i < usersize; i++)
      {
        cout << bops[i].title << endl;
      }
      break;
    case 'c':
      for (int i = 0; i < usersize; i++)
      {
        cout << bops[i].preference << endl;
      }
      break;
    case 'd':
      for (int i = 0; i < usersize; i++)
      {
        cout << bops[i].fullname << endl;
      }
      break;

    default:
      break;
    }

    cin.get();
    cout << "Next choice:";
    cin.get(choice);
  }
  cout << "Bye!";
}