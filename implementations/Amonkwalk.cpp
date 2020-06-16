#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int count, t, len;
  cin >> t;
  char s[100000];
  for (int i = 0; i < t; i++)
  {
    cin >> s;
    len = strlen(s);
    count = 0;

    for (int j = 0; j < len; j++)
    {
      s[j] = tolower(s[j]);
      if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
      {
        count++;
      }
    }
    cout << count;
  }
  return 0;
}
