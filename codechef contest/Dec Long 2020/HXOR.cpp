
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
#define vvl vector < vll >
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
#define pb push_back
#define loop(i,n) for(ll i = 0; i < n; ++i)
#define loop_1(i,n) for(int i = 1; i <= n; ++i)

using namespace std;


void solve() {

	ll dp[100001];
	ll k = 30;
	ll n, x;
	cin >> n >> x;
	vvl arr(k + 1);
	loop(i, n)
	{
		cin >> dp[i];
		if ( i == n - 1) continue;
		for (ll j = k; j >= 0; j--)
			if (dp[i] & (1LL << j)) {
				arr[j].pb(i);
			}
	}
	vll count(k + 1, 0);
	loop(i, n - 1) {
		for (ll j = k; j >= 0; --j)
		{
			ll masking = 1LL << j;
			if ((dp[i]&masking) == 0) continue;
			dp[i] ^= masking;
			ll d;
			if (++count[j] < arr[j].size())
			{
				d = arr[j][count[j]++];
			}
			else d = n - 1;
			dp[d] ^= masking;
			if (--x == 0) break;
		}
		if (x == 0) break;}
		if (x == 1 || (x % 2 == 1 && n == 2))
		{
			dp[n - 2] ^= 1,
			dp[n - 1] ^= 1;
		}
		loop(i, n) {
			cout << dp[i]<<" ";
		}
		cout<<endl;
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
