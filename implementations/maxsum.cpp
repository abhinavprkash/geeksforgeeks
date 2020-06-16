#include <bits/stdc++.h>
using namespace std;

int kadane(int *arr, int n)
{
  int current_sum = 0;
  int max_sum = 0;
  for (int i = 0; i < n; i++)
  {
    current_sum = current_sum + arr[i];
    if (max_sum < current_sum)
    {
      max_sum = current_sum;
    }
    if (current_sum < 0)
    {
      current_sum = 0;
    }
  }
  return max_sum;
}

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  int arr[n];
  int maximum_sum = kadane(arr, n);
  cout << maximum_sum;
  return 0;
}
