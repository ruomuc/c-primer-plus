#include <iostream>

template <typename T>
T max5(T[5]);

int main()
{
  using namespace std;

  int test_int[5] = {1, 2, 3, 4, 5};
  double test_double[5] = {1.1, 2.1, 3.4, 2.3, 4.5};

  cout << max5(test_int) << endl;
  cout << max5(test_double) << endl;
}

template <typename T>
T max5(T arr[5])
{
  T max = 0;

  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}