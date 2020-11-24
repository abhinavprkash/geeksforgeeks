
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


using namespace std;


int main() {
  int n, d, i;
  string answer = "";
  cin >> n >> d;
  int price[n];
  int profit[d];
  for (i = 0; i < n; i++) {
    cin >> price[i];
  }
  for (i = 0; i < d; i++) {
    cin >> profit[i];
  }
  for (int p = 0; p < d; p++) {
    unordered_map<int, int> m;
    int st = -1, en = -1;
    for (int i = 1; i <= n; i++) {
      if (m.find(price[i - 1] - profit[p]) != m.end()) {
        st = m[price[i - 1] - profit[p]];
        en = i;
        break;
      }
      m[price[i - 1]] = i;
    }
    if (answer != "") {
      answer += ",";
    }
    if (st != -1) {
      answer += to_string(st) + " " + to_string(en);
    } else {
      answer += "-1";
    }
  }

  cout << answer << endl;

  return 0;
}