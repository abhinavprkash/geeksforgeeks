
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
	ll i, j, n, m, c = 0, f = 0;
	cin >> n >> m;
	ll p[m];
	fo(i, m) {
		cin >> p[i];
	}
	while (n != 0) {
		f = 0;
		fo(i, m) {
			if (max(p[i], n) % min(n, p[i]) != 0) {
				n--;
				c++;
				f = 1;
				break;
			}
		}
		if (f == 0) {
			break;
		}
	}
	cout << c << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	ll t = 1;
	cin >> t;
	while (t-- > 0) {
		solve();
	}

	return 0;
}
