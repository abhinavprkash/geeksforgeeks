#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<ll, ll>
#define MOD 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

ll product(ll a, ll b, ll mod = MOD)
{
	ll res = 0;

	while (b)
	{
		if (b & 1)
			res = (res + a) % mod;
		a = (a + a) % mod;

		b >>= 1;
	}

	return res;
}

ll power_extended(ll a, ll b, ll mod = MOD)
{
	ll res = 1;

	while (b)
	{
		if (b & 1)
			res = product(res, a, mod);
		a = product(a, a, mod);

		b >>= 1;
	}

	return res;
}
void solve()

{
	ll a, b, n;

	cin >> a >> b >> n;

	if (a == b)
	{
		cout << (power_extended(a, n) + power_extended(b, n)) % MOD << '\n';
	} else
	{
		ll d = (power_extended(a, n, a - b) + power_extended(b, n, a - b)) % (a - b);

		cout << __gcd(d, a - b) << '\n';
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		solve();
	}
	return 0;
}
