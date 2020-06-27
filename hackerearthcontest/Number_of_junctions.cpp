
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
#define M 200005
#define pb push_back


using namespace std;

vector<ll>v[M];
map<pair<ll, ll>, ll>edg;
vector<ll>path;
vector<bool>vss(M);
bool dfs(ll fr, ll to) {
	if (fr == to) {
		path.pb(fr);
		return true;
	}
	vss[fr] = true;
	for (auto x : v[fr]) {
		if (!vss[x]) {
			if (dfs(x, to)) {
				path.pb(fr);
				return true;
			}
		}
	}
	return false;
}
map<ll, ll>ans;
void solve(ll n, ll pr) {
	vss[n] = true;
	for (auto x : v[n]) {
		if (x != pr && vss[x] == false) {
			ans[x] = ans[n] + edg[ {x, n}];
			solve(x, n);
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	ll t = 1LL;
// cin>>t;

	while (t--)
	{
		ll n;
		cin >> n;
		ll x, y;
		for (int i = 0; i < n - 1; i++) {
			cin >> x >> y;
			v[--x].pb(--y);
			v[y].pb(x);
			edg[ {x, y}] = 0LL;
			edg[ {y, x}] = 0LL;
		}
		ll m, l;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> x >> y >> l;
			vss.assign(n + 1, false);
			x--; y--;
			path.clear();
			dfs(x, y);
			reverse(all(path));

			for (ll i = 0; i < path.size() - 1; i++) {
				edg[ {path[i], path[i + 1]}] += min(i + 1, l);
				edg[ {path[i + 1], path[i]}] += min(i + 1, l);
				l = max(0LL, (l - (i + 1)));
			}
			path.clear();
		}

		vss.assign(n + 1, false);
		solve(0, -1);
		ll res = 0LL;
		for (auto x : ans)res = max(res, x.second);
		cout << res << "\n";
	}
	return 0;
}


