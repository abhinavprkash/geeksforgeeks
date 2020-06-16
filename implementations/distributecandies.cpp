#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;

ll n, k, mid, result;

vector<int> arr;

bool can(ll mid)
{
  ll temp = k;
  for (ll i = n - 1; i >= 0; i--)
  {
    temp -= (arr[i] / mid);
    if (temp <= 0)
      return true;
  }
  return false;
}

int main(int argc, char const *argv[])
{
  ll t;
  cin >> t;
  ll left;
  ll right;
  while (t--)
  {
    cin >> n >> k;
    arr.clear();
    arr.resize(n);
    for (ll i = 0; i < n; i++)
      cin >> arr[i];
    sort(arr.begin(), arr.end());
    left = 1;
    right = arr.back() + 1;
    result = 0;
    while (left <= right)
    {
      mid = (left + right) / 2;

      if (can(mid))
      {
        result = mid;
        left = mid + 1;
      }
      else
        right = mid - 1;
    }
    cout << result << endl;
  }
  return 0;
}
