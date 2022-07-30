#include <iostream>
#include <string>

int main()
{
  using std::cin;
  using std::cout;
  using std::string;

  cout << "What is your first name? ";

  string first_name;
  getline(cin, first_name);

  cout << "What is your last name? ";
  string last_name;
  getline(cin, last_name);

  cout << "What letter grade do you deserve? ";
  string grade;
  cin >> grade;

  cout << "What is your age? ";
  int age;
  cin >> age;

  cout << "Name: " << last_name << ", " << first_name << std::endl;
  cout << "Grade: " << grade << std::endl;
  cout << "Age: " << age << std::endl;

  return 0;
}