#include <iostream>

int main()
{
  using namespace std;

  cout << "Please enter one of the following choices:";
  cout << "c) carnivore p) pianist" << endl;
  cout << "t) tree g) game" << endl;

  char choice;
  cin.get(choice);
  while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
  {
    cin.get();
    cout << "Please enter a c, p, t, or g:";
    cin.get(choice);
  }

  switch (choice)
  {
  case 'c':
    break;
  case 'p':
    break;
  case 't':
    cout << "A maple is a tree";
  case 'g':
    break;
  }

  return 0;
}