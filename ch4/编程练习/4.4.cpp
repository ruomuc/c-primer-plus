#include<iostream>
#include <string>

int main()
{
  using std::cin;
  using std::cout;
  using std::string;

  string first_name, last_name, full_name;

  cout << "Enter your first name: ";
  getline(cin,first_name);
  cout << "Enter your last name: ";
  getline(cin,last_name);

  full_name = first_name + ", "+ last_name;
  cout << full_name << std::endl;
}