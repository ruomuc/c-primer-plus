#include <iostream>
#include <string>

using std::string;

struct CandyBar
{
  string brand;
  double weight;
  double calorie;
};

int main()
{
  using std::cout;

  CandyBar snakes[3] = {{"Mocha Munch", 2.3, 350},
                        {"Mocha Munch2", 2.31, 3501},
                        {"Mocha Munch3", 2.31, 3502}};

  cout << "snakes[0].brand = " << snakes[0].brand << std::endl;
  cout << "snakes[0].weight = " << snakes[0].weight << std::endl;
  cout << "snakes[0].calorie = " << snakes[0].calorie << std::endl
       << std::endl;

  cout << "snakes[1].brand = " << snakes[1].brand << std::endl;
  cout << "snakes[1].weight = " << snakes[1].weight << std::endl;
  cout << "snakes[1].calorie = " << snakes[1].calorie << std::endl
       << std::endl;

  cout << "snakes[2].brand = " << snakes[2].brand << std::endl;
  cout << "snakes[2].weight = " << snakes[2].weight << std::endl;
  cout << "snakes[2].calorie = " << snakes[2].calorie << std::endl;

  return 0;
}
