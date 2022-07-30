#include <iostream>
#include <cstring>

int main()
{
  using std::cin;
  using std::cout;

  const int SIZE = 10;

  char first_name[SIZE];
  char last_name[SIZE];
  char full_name[SIZE * 2];

  cout << "Enter your first name: ";
  cin.getline(first_name, SIZE);
  cout << "Enter your last name: ";
  cin.getline(last_name, SIZE);

  strcpy(full_name, last_name);
  strcat(full_name, ", ");
  strcat(full_name, first_name);

  cout << full_name << std::endl;
}