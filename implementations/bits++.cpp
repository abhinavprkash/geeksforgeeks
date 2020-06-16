#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n, x(0);
  cin >> n;
  string s;
  while (n--)
  {
    cin >> s;
    if (s[1] == '+')
    {
      ++x;
    }
    else
    {
      --x;
    }
  }
  cout << x << endl;
  return 0;
}