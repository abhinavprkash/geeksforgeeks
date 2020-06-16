#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  char str[n];
  cin >> str;
  int i, length = 0, flag = 0;
  length = strlen(str);
  for (int i = 0; i < length; i++)
  {
    if (str[i] != str[length - i - 1])
    {
      flag = 1;
      break;
    }
  }
  if (flag)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return 0;
}
