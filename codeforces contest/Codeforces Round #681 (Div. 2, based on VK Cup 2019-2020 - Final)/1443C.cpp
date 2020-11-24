
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

void solve(){
	ll n;
	cin>>n;
	pll arr[n];
	ll a1 = 0, b1 =0;
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i].f;
	}
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i].s, a1 += arr[i].s;
	}
	sort(arr, arr + n);
	ll mx = 0, ans = a1;
	for (int i = 0; i < n; ++i)
	{
		a1 -= arr[i].s;
		mx = max(mx, arr[i].f);
		ans = min(ans, max(a1, mx));
	}
	cout<<ans<<endl;
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
