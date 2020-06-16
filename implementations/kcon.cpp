#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll kadane(int arr[], int n)
{
  ll curr_sum = 0;
  ll max_so_far = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    curr_sum = curr_sum + arr[i];
    if (max_so_far < curr_sum)
    {
      max_so_far = curr_sum;
    }
    if (curr_sum < 0)
    {
      curr_sum = 0;
    }
  }
  return max_so_far;
}

ll maxSubarraySum(int arr[], int n, int k)
{
  ll kadanes_sum = kadane(arr, n);
  if (k == 1)
  {
    return kadanes_sum;
  }
  ll curr_prefix_sum = 0, curr_suffix_sum = 0;
  ll max_prefix_sum = INT_MIN, max_suffix_sum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    curr_prefix_sum = curr_prefix_sum + arr[i];
    max_prefix_sum = max(curr_prefix_sum, max_prefix_sum);
  }
  ll totalSum = curr_prefix_sum;
  for (int i = n - 1; i >= 0; i--)
  {
    curr_suffix_sum = curr_suffix_sum + arr[i];
    max_suffix_sum = max(max_suffix_sum, curr_suffix_sum);
  }
  ll ans;
  if (totalSum < 0)
  {
    ans = max(max_suffix_sum + max_prefix_sum, kadanes_sum);
  }
  else
  {
    ans = max(max_suffix_sum + max_prefix_sum + (totalSum * (k - 2)), kadanes_sum);
  }
  return ans;
}

int main(int argc, const char **argv)
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    cout << maxSubarraySum(arr, n, k) << endl;
  }
  return 0;
}