#include <bits/stdc++.h>

using namespace std;
void printOrder(int a, int b)
{
  if (a < b)
  {
    cout << a << " " << b << endl;
  }
  else
  {
    cout << b << " " << a << endl;
  }
}

void PairSum(int *input, int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = i; j < n; j++)
    {
      if (input[i] + input[j] == 0)
      {
        printOrder(input[i], input[j]);
      }
    }
  }
}
int main()
{
  int n;
  int arr[100000];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  PairSum(arr, n);
  return 0;
}
