#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n, m;
  set<int> a, c;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;
    a.insert(x);
  }
  cin >> m;
  for (int i = 0; i < m; ++i)
  {
    int x;
    cin >> x;
    c.insert(x);
  }
  set<int> b;
  for (int x = 1; x <= 100; ++x)
  {
    bool ok = 1;
    for (int xa : a)
      if (!c.count(xa + x))
      {
        ok = 0;
        break;
      }
    if (ok)
      b.insert(x);
  }
  for (int x : b)
    cout << x << " ";
  cout << endl;
  return 0;
}
