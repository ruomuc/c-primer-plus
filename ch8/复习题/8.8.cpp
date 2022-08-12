#include <iostream>

struct box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

template <typename T>
T max(const T &, const T &);

template <>
box max(const box &, const box &);

int main()
{
  box b1 = {"china", 1.0, 1.0, 1.0, 1.0};
  box b2 = {"cn", 2.0, 2.0, 2.0, 8.0};

  auto max_box = max(b1, b2);
  std::cout << "max box volume : " << max_box.volume << std::endl;
}

template <>
box max(const box &b1, const box &b2)
{
  return b1.volume > b2.volume ? b1 : b2;
}
