#include <bits/stdc++.h>
using namespace std;

char *removeSupsSorted(char *str)
{
  int res_ind = 1, ip_ind = 1;

  while (*(str + ip_ind))
  {
    if (*(str + ip_ind) != *(str + ip_ind - 1))
    {
      *(str + res_ind) = *(str + ip_ind);
      res_ind++;
    }
    ip_ind++;
  }
  *(str + res_ind) = '\0';
  return str;
}

char *uniqueChar(char *str)
{
  int n = strlen(str);
  sort(str, str + n);
  return removeSupsSorted(str);
}

int main()
{

  char input[1000000];
  cin >> input;
  cout << uniqueChar(input) << endl;
  return 0;
}
