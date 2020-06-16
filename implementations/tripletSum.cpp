#include <bits/stdc++.h>
using namespace std;
void printOrder(int a, int b, int c)
{
  if (a <= b && a <= c)
  {
    if (b < c)
      cout << a << ' ' << b << ' ' << c << endl;
    else
      cout << a << ' ' << c << ' ' << b << endl;
  }
  else if (b <= a && b <= c)
  {
    if (a < c)
      cout << b << ' ' << a << ' ' << c << endl;
    else
      cout << b << ' ' << c << ' ' << a << endl;
  }
  else
  {
    if (a < b)
      cout << c << ' ' << a << ' ' << b << endl;
    else
      cout << c << ' ' << b << ' ' << a << endl;
  }
}

void triplet(int arr[], int size, int x)
{
  int i, j, k;
  for (i = 0; i < size; ++i)
  {
    for (j = i + 1; j < size; ++j)
    {
      for (k = j + 1; k < size; ++k)
      {
        if (arr[i] + arr[j] + arr[k] == x)
        {
          printOrder(arr[i], arr[j], arr[k]);
        }
      }
    }
  }
}
