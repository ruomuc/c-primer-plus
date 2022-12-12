#include <string>
#include <set>
#include <iostream>

int main()
{
  std::set<std::string> mat_set, pat_set, result_set;

  std::cout << "Enter Mat's friends: " << std::endl;
  std::string name;
  while (getline(std::cin, name) && name != "q")
  {
    mat_set.insert(name);
  }
  std::cout << "Mat's friends list: " << std::endl;
  for (auto pd = mat_set.begin(); pd != mat_set.end(); pd++)
  {
    std::cout << *pd << " ";
  }
  std::cout << std::endl;

  std::cout << "Enter Pat's friends: " << std::endl;
  while (getline(std::cin, name) && name != "q")
  {
    pat_set.insert(name);
  }
  std::cout << "Pat's friends list: " << std::endl;
  for (auto pd = pat_set.begin(); pd != pat_set.end(); pd++)
  {
    std::cout << *pd << " ";
  }
  std::cout << std::endl;

  result_set.insert(mat_set.begin(), mat_set.end());
  result_set.insert(pat_set.begin(), pat_set.end());
  std::cout << "All friend's: " << std::endl;
  for (auto pd = result_set.begin(); pd != result_set.end(); pd++)
  {
    std::cout << *pd << " ";
  }
}
