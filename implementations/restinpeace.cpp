#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
int main(int argc, char const *argv[])
{
  int test, flag, len;
  char num[1000000];
  lli number;
  cin >> test;
  while (test--)
  {
    cin >> number;
    sprintf(num, "%llu", number);
    len = strlen(num);
    flag = 0;
    for (int i = 0; i < len - 1; i++)
    {
      if (num[i] == '2' && num[i + 1] == '1')
      {
        flag++;
      }
    }
    if (flag == 0 && (number % 21) != 0)
    {
      cout << "The streak lives still in our heart!" << endl;
    }
    else
    {
      cout << "The streak is broken!" << endl;
    }
  }

  return 0;
}
