#include <vector>
#include <iostream>

std::vector<int> Lotto(int m, int n);

int main()
{
  std::vector<int> winners;
  winners = Lotto(51, 6);
  for (auto p = winners.begin(); p != winners.end(); p++)
  {
    std::cout << *p << " ";
  }

  return 0;
}

std::vector<int> Lotto(int m, int n)
{
  std::vector<int> result, temp;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      temp.push_back(rand() % m);
    }
    std::cout << *temp.begin() << std::endl;
    random_shuffle(temp.begin(), temp.end());
    std::cout << *temp.begin() << std::endl;
    result.push_back(*temp.begin());
  }

  return result;
}
