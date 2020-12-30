
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi arrtor<ll>
#define vll arrtor<ll>
#define si set<ll>
#define vvi arrtor < vi >
#define pii pair<ll,ll>
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
	si arr;
	ll n, n1;
	cin >> n;
	ll ans;
	for (ll i = n;; i++)
	{
		n1 = i;
		while (n1) {
			if (n1 % 10) {
				arr.insert(n1 % 10);
			}
			n1 /= 10;
		}
		bool flag = true;
		
		for(auto itr = arr.begin(); itr != arr.end(); itr++) {
			if ((i % (*itr)) != 0)
			{
				flag = false;
				break;
			}
		}
		if (flag) {
			ans = i;
			break;
		}
		arr.clear();
	}
	cout << ans << endl;
}

int32_t main()
{
	std::ios::sync_with_stdio(false);
	ll T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		solve();
	}
	return 0;
}
