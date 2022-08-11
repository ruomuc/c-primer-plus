#include <iostream>
#include <cstring>

int main()
{
  using namespace std;

  char words[100];
  int vowel_num = 0, consonant_num = 0, other_num = 0;

  cin >> words;
  while (strcmp(words, "q") != 0)
  {
    if (!isalpha(words[0]))
    {
      other_num++;
      continue;
    }

    switch (words[0])
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      vowel_num++;
      /* code */
      break;

    default:
      consonant_num++;
      break;
    }
    cin >> words;
  }

  cout << vowel_num << "words beginning with vowels" << endl;
  cout << consonant_num << "words beginning with consonants" << endl;
  cout << other_num << "others" << endl;
}