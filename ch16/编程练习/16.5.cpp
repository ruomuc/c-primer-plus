#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

template <class T>
int reduce(T ar[], int n);

int main()
{
  const int size = 6;
  long ar[6] = {12,
                13,
                13,
                14,
                12,
                15};
  std::cout << reduce(ar, 6) << std::endl;

  std::string ars[6] = {"q",
                        "q",
                        "we",
                        "we",
                        "q",
                        "adsf"};
  std::cout << reduce(ars, 6) << std::endl;
}

template <class T>
int reduce(T ar[], int n)
{
  std::vector<T> v(ar, ar + n); // 从数组创建一个向量
  std::sort(v.begin(), v.end());
  v.erase(std::unique(v.begin(), v.end()), v.end()); // 删除连续的重复元素
  return v.size();                                   // 返回向量的大小
}
