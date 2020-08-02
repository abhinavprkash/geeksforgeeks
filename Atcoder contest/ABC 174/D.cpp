
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
	ll n;
	string s;
	cin >> n >> s;

	ll right = 0, left = 0, swap = 0;
	for (ll i = 0; i < n; ++i) {
		if (s[i] == 'W') {
			++left;
		} else {
			++right;
		}
	}
	ll ans = min(right, left);

	for (ll i = 0; i < right; ++i) {
		if (s[i] == 'W') {
			++swap;
		}
	}
	ans = min(ans, swap);

	cout << ans << '\n';
}


int main()
{
	std::ios::sync_with_stdio(false);
	solve();
	return 0;
}
