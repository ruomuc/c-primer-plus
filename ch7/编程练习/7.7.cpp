#include <iostream>

double *Fill_array(double[], int len);
void Show_array(double[], double *);
void Reverse_array(double[], double *);

const int SIZE = 10;

int main()
{
  double numbers[SIZE];
  double *ep = Fill_array(numbers, SIZE);
  Show_array(numbers, ep);
  Reverse_array(numbers, ep);
  Show_array(numbers, ep);
  Reverse_array(&numbers[1], ep - 1);
  Show_array(numbers, ep);
}

double *Fill_array(double arr[], int len)
{
  using namespace std;

  double value;
  for (int i = 0; i < len; i++)
  {
    cout << "Enter a double value: ";
    cin >> value;
    if (value <= 0)
    {
      return &arr[i - 1];
    }
    arr[i] = value;
  }
  return &arr[len - 1];
}

void Show_array(double arr[], double *end_point)
{
  using namespace std;

  int i = 0;
  while (arr <= end_point)
  {
    cout << "index = " << i << " value = " << *arr << endl;
    arr++;
    i++;
  }
}

void Reverse_array(double arr[], double *end_point)
{
  using namespace std;

  while (arr <= end_point)
  {
    int temp = *arr;
    *arr = *end_point;
    *end_point = temp;

    arr++;
    end_point--;
  }
}
