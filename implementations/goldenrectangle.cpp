#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef double ld;
int main(int argc, char const *argv[])
{
  ll t;
  cin >> t;
  ll count = 0;
  for (ll i = 0; i < t; i++)
  {
    ld a, b, c;
    cin >> a >> b;
    if (a > b)
    {
      c = a / b;
      if (c >= 1.6 && c <= 1.7)
        count++;
    }
    else if (a < b)
    {
      c = b / a;
      if (c >= 1.6 && c <= 1.7)
        count++;
    }
  }
  cout << count << endl;
  return 0;
}
