/*Doctor Chef Problem Code: DRCHEF
submitted by Abhinav Prakash
username abhinav_526 */
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
int main()
{
	std::ios::sync_with_stdio(false);
	ll T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		ll n, x;
		cin >> n >> x;
		ll a[n];
		ll ans = 1;
		for (ll i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		ll i_1 = lower_bound(a, a + n, x) - a;
		ans += (i_1 - 1);
		for (ll i = i_1; i < n; ++i)
		{
			ll check = 0;
			while (x < a[i]) {
				x = min(2 * x, 2 * a[i]);
				ans++;
			}
			if (!check)
						x = 2 * a[i];
		}
		cout << ans << endl;
	}
	return 0;
}


