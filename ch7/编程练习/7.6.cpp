#include <iostream>

int Fill_array(double[], int len);
void Show_array(double[], int len);
void Reverse_array(double[], int len);

const int SIZE = 10;

int main()
{
  double numbers[SIZE];
  int counter = Fill_array(numbers, SIZE);
  Show_array(numbers, counter);
  Reverse_array(numbers, counter);
  Show_array(numbers, counter);
  Reverse_array(&numbers[1], counter - 2);
  Show_array(numbers, counter);
}

int Fill_array(double arr[], int len)
{
  using namespace std;

  double value;
  int counter = 0;
  for (int i = 0; i < len; i++)
  {
    cout << "Enter a double value: ";
    cin >> value;
    if (value <= 0)
    {
      break;
    }
    arr[i] = value;
    counter++;
  }

  return counter;
}

void Show_array(double arr[], int len)
{
  using namespace std;

  for (int i = 0; i < len; i++)
  {
    cout << "index = " << i << " value = " << arr[i] << endl;
  }
}

void Reverse_array(double arr[], int len)
{
  using namespace std;

  for (int i = 0; i < len / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[len - i - 1];
    arr[len - i - 1] = temp;
  }
}