#include <iostream>
#include <string>

const int SIZE = 20;
const char DONE[] = "done";

int main()
{
  using namespace std;

  int counter = 0;
  string words;
  cout << "Enter words (to stop, type the word done):" << endl;

  while (words != DONE)
  {
    counter++;
    cin >> words;
    cin.get();
  }
  cout << "You entered a total of " << counter - 1 << " words";

  return 0;
}