#include <bits/stdc++.h>

using namespace std;

int MissingNumber(int arr[], int size)
{
  int *count = new int[sizeof(int) * (size - 2)];
  for (int i = 0; i < size; i++)
  {
    if (count[arr[i]] == 1)
      return arr[i];
    else
      count[arr[i]]++;
  }
}
int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << MissingNumber(arr, n);
  return 0;
}
