//C - Forbidden List

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int X, N;
  cin >> X >> N;
  vector<int> p(N);
  rep(i, N) cin >> p[i];

  vector<bool> isValid(102, true);
  rep(i, N) {
    isValid[p[i]] = false;
  }

  int ans;
  int tmp = 1000;
  rep(i, 102) {
    if (isValid[i] && abs(X - i) < tmp) {
      ans = i;
      tmp = abs(X - i);
    }
  }

  cout << ans << endl;

  return 0;
}