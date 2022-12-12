#include <iostream>
#include <ctime>
#include <vector>
#include <list>

const int LENGTH = 1000000;

int main()
{
  std::vector<int> vi0;
  std::srand(std::time(0));

  for (int i = 0; i < LENGTH; i++)
  {
    vi0.push_back(rand() % LENGTH);
  }

  std::vector<int> vi(vi0);
  std::list<int> li(vi0.begin(), vi0.end());

  // 对vector vi进行排序
  clock_t time = clock();
  sort(vi.begin(), vi.end());
  time = clock() - time;
  std::cout << "Vector vi used time : " << (double)(time) << CLOCKS_PER_SEC << " second" << std::endl;

  // 对list li 进行排序
  time = clock();
  li.sort();
  time = clock() - time;
  std::cout << "list li used time : " << (double)(time) << CLOCKS_PER_SEC << " second" << std::endl;

  // 将 li 复制到 vi，排序后再将结果复制到 li
  li.assign(vi0.begin(), vi0.end());
  time = clock();
  vi.assign(li.begin(), li.end());
  sort(vi.begin(), vi.end());
  li.assign(vi.begin(), vi.end());
  time = clock() - time;
  std::cout << "list copy and sort used time : " << (double)(time) << CLOCKS_PER_SEC << " second" << std::endl;
}
