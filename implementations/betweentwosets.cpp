#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int n, m;
  cin >> n >> m;

  int a[100], b[100];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }
  int count = 0;
  for (int j = 1; j <= 100; j++)
  {
    int flag = 1;
    for (int i = 0; i < n; i++)

      if (j % a[i] != 0)

        flag = 0;

    for (int i = 0; i < m; i++)

      if (b[i] % j != 0)

        flag = 0;

    if (flag == 1)

      count++;
  }

  cout << count;
  return 0;
}
