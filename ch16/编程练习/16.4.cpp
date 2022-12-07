#include <algorithm>
#include <vector>
#include <iostream>

int reduce(long ar[], int n);

int main()
{
  const int size = 6;
  long ar[6] = {12,
                13,
                13,
                14,
                12,
                15};
  std::cout << reduce(ar, 6);
}

int reduce(long ar[], int n)
{
  std::vector<long> v(ar, ar + n);                   // 从数组创建一个向量
  v.erase(std::unique(v.begin(), v.end()), v.end()); // 删除连续的重复元素
  return v.size();                                   // 返回向量的大小
}
