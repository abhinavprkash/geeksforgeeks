#include <bits/stdc++.h>

using namespace std;

char nonRepeatingCharacter(string str)
{

  map<char, int> frequency;
  for (int i = 0; i < str.length(); i++)
  {
    char currentChar = str[i];
    frequency[currentChar]++;
  }
  for (int i = 0; i < str.length(); i++)
  {
    /* code */
    if (frequency[str[i]] == 1)
    {
      return str[i];
    }
  }
  return str[0];
}