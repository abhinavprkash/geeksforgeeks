#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s[100];
  cin >> s[100];
  int k;
  cin >> k;
  for (int i = 0; i < k; i++)
  {
    if (s[i] == "9")
    {
      k++;
    }
    else
      s[i] = "9";
  }
  cout << s;
  return 0;
}