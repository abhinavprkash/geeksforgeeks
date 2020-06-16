#include <iostream>
using namespace std;
typedef long long int ll;
ll sum = 0;
void merge(ll arr[], ll temp[], ll l, ll mid, ll r)
{
  ll i = l, j = mid, k = l;
  while (i <= mid - 1 && j <= r)
  {
    if (arr[i] < arr[j])
    {
      sum += arr[i] * (ll)(r - j + 1);
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
    }
  }
  while (i <= mid - 1)
  {
    temp[k++] = arr[i++];
  }
  while (j <= r)
  {
    temp[k++] = arr[j++];
  }
  for (i = l; i <= r; i++)
  {
    arr[i] = temp[i];
  }
}
void mergeSort(ll arr[], ll temp[], ll l, ll r)
{
  ll mid;
  if (l < r)
  {
    mid = l + (r - l) / 2;
    mergeSort(arr, temp, l, mid);
    mergeSort(arr, temp, mid + 1, r);
    merge(arr, temp, l, mid + 1, r);
  }
}
void merge1(long long int arr[], long long int temp[], long long int n)
{
  mergeSort(arr, temp, 0, n - 1);
}

int main()
{
  long long int t;
  long long int arr[100005], temp[100005];

  cin >> t;
  while (t--)
  {
    long long int i, n;
    cin >> n;
    for (i = 0; i < n; i++)
      cin >> arr[i];
    sum = 0;
    merge1(arr, temp, n);
    cout << sum << endl;
  }
  return 0;
}