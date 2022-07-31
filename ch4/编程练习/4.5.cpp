#include <iostream>
#include <string>

using std::string;

struct CandyBar
{
  string brand;
  double weight;
  double calorie;
};

int main ()
{
  CandyBar snake = {"Mocha Munch", 2.3, 350};
  
  std::cout << snake.brand<<std::endl;
  std::cout << snake.weight<<std::endl;
  std::cout << snake.calorie<<std::endl;

}
