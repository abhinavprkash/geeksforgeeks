
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


ll pts[200005][7] = {0};
ll unionset[200002];

bool compa(const pair<ll, pll> &a,
           const pair<ll, pll> &b)
{
	return a.first > b.first;
}

ll mnht(ll kth, ll idx, ll d)
{
	ll dist = 0;

	for (ll i = 0; i < d; i++)
	{
		dist += abs(pts[kth][i] - pts[idx][i]);
	}

	return dist;
}
ll findpar(ll ch)
{
	if (unionset[ch] == -1)return ch;
	return unionset[ch] = findpar(unionset[ch]);
}
ll maximum_combunatioon(ll cmbn[6],  ll n, ll d)
{
	ll pk = -19372273028659; ll idx = 0;

	for (ll i = 0; i < n; i++)
	{
		ll val = 0;

		for (ll j = 0; j < d; j++)
		{
			val += (1 - 2 * cmbn[j]) * pts[i][j];
		}

		if (val > pk)
		{
			pk = val;
			idx = i;
		}
	}

	return idx;
}

void solve() {
	ll n, d;
	cin >> n >> d;

	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < d; j++)
			cin >> pts[i][j];
	}

	ll pk[2 << d];

	for (ll j = 0; j < 1 << (d); j++)
	{
		ll cmbn[6] = {0};
		for (ll dig = 0; dig < d; dig++)
		{
			if (j & 1 << dig)
				cmbn[dig] = 1;
		}
		pk[j] = maximum_combunatioon(cmbn, n, d);
	}
	vector <pair<ll, pair<ll, ll>>> graph;
	ll maxd = 0;
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < 1 << (d); j++)
		{
			ll x = mnht(i, pk[j], d);
			graph.push_back({x, {i, pk[j]}});
		}
	}
	ll tw = 0;
	sort(graph.begin(), graph.end(), compa);
	memset(unionset, -1, sizeof(unionset));
	for (ll i = 0; i < graph.size(); i++)
	{
		ll s1 = findpar(graph[i].s.f);
		ll s2 = findpar(graph[i].s.s);
		if (s1 != s2)
		{
			tw += graph[i].f;
			unionset[s1] = s2;
		}
	}
	cout << tw << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	solve();
	return 0;
}
