#include <iostream>

double get_max(const double arr[], int len);

double get_max(const double arr[], int len)
{
  double max = 0;
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

const int number_size = 6;

int main()
{
  double numbers[number_size] = {0,
                                 1,
                                 2,
                                 3,
                                 4,
                                 5};

  double max = get_max(numbers, number_size);

  std::cout << "max of numbers = " << max << std::endl;
}