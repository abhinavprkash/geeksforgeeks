#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  else
  {
    return gcd(b, a % b);
  }
}

void Rotate(int arr[], int d, int size)
{
  int g_c_d = gcd(d, size);
  for (int i = 0; i < g_c_d; i++)
  {
    int temp = arr[i];
    int j = i;
    while (1)
    {
      int k = j + d;
      if (k >= size)
        k = k - size;
      if (k == i)
        break;
      arr[j] = arr[k];
      j = k;
    }
    arr[j] = temp;
  }
}

int main(int argc, char const *argv[])
{

  return 0;
}
