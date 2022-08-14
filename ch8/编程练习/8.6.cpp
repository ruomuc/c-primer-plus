#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T arr[], int size);

template <>
char *maxn<char *>(char *arr[], int size);

int main()
{
  int test_int[6] = {1, 2, 3, 4, 5, 6};
  double test_double[4] = {2.1, 3.4, 2.3, 4.5};
  const char *test_chars[5] = {"q", "qw", "qwe", "qwer", "qwert"};

  cout << maxn(test_int, 6) << endl;
  cout << maxn(test_double, 4) << endl;
  cout << maxn(test_chars, 5) << endl;

  return 0;
}

template <typename T>
T maxn(T arr[], int size)
{
  T max = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

template <>
char *maxn<char *>(char *arr[], int size)
{
  int idx = 0;
  for (int i = 0; i < size; i++)
  {
    if (strlen(arr[i]) > strlen(arr[idx]))
    {
      idx = i;
    }
  }
  return arr[idx];
}
