
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;


void solve() {
  int n, q;
  cin >> n >> q;
  vi input(n);
  for (int i = 1; i < n; i++)
    cin >> input[i];
  while (q--) {
    int s, k;
    cin >> s >> k;
    int left = s;
    int right = s;
    while (--k) {
      if (left == 1) {
        right = right + 1;
        s = right;
      } else if (right == n) {
        left = left - 1;
        s = left;
      } else if (input[left - 1] < input[right]) {
        left = left - 1;
        s = left;
      } else {
        right = right + 1;
        s = right;
      }
    }
    cout << s << ' ';
  }
  cout << endl;
}
int main() {
       std::ios::sync_with_stdio(false);

  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": ";
    solve();
  }
}