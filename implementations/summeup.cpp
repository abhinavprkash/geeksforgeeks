#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll sum = 0;
    while (n != 0)
    {
      sum = sum + n % 10;
      n = n / 10;
    }
    cout << sum;
  }
  return 0;
}
