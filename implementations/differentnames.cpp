#include <bits/stdc++.h>
#include <map>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
  string s;
  int count = 0;
  getline(cin, s);
  string temp = "";
  unordered_map<string, int> m;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ' ')
    {
      m[temp]++;
      temp = "";
    }
    else
    {
      temp = temp + s[i];
    }
    if (i == s.length() - 1)
    {
      m[temp]++;
    }
  }
  unordered_map<string, int>::iterator it;
  for (it = m.begin(); it != m.end(); it++)
  {
    if (it->second >= 2)
    {
      cout << it->first << " " << it->second << endl;
      count++;
    }
  }
  if (count == 0)
    cout << -1;

  return 0;
}
