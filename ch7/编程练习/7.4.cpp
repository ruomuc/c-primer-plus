// lotto.cpp -- probability of winning
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned fnumbers, unsigned snumbers, unsigned choices);
int main()
{
  using namespace std;

  cout << probability(47, 27, 5);

  return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned fnumbers, unsigned snumbers, unsigned choices)
{
  long double result = 1.0; // here come some local variables
  long double n;
  unsigned p;

  for (n = fnumbers, p = choices; p > 0; n--, p--)
    result = result * n / p;

  return result / snumbers;
}