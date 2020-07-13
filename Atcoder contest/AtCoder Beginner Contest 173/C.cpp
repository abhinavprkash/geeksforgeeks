#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> c(h);
  int ans = 0;
  rep(i, h) { cin >> c[i]; }
  vector<vector<bool> > bl(h, vector<bool>(w, false));
  rep(i, h) rep(j, w) {
    if (c[i][j] == '#') {
      bl[i][j] = true;
    }
  }

  for (int bit1 = 0; bit1 < (1 << h); ++bit1) {
    for (int bit2 = 0; bit2 < (1 << w); ++bit2) {
      vector<vector<bool> > check(h, vector<bool>(w, false));
      check = bl;
      rep(i, h) {
        if (bit1 & (1 << i)) {
          rep(j, w) {
            if (c[i][j] == '#') check[i][j] = false;
          }
        }
      }
      rep(i, w) {
        if (bit2 & (1 << i)) {
          rep(j, h) {
            if (c[j][i] == '#') check[j][i] = false;
          }
        }
      }
      int cnt1 = 0;
      rep(i, h) rep(j, w) {
        if (check[i][j]) cnt1++;
      }
      if (cnt1 == k) ans++;
    }
  }

  cout << ans << endl;

  return 0;
} 