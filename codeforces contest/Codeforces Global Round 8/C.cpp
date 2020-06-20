//C. Even Picture

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
#define pb push_back

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	ll n;
	cin >> n;
	vector<pair<ll, ll>> v;
	v.pb({0, 0});
	v.pb({0, 1});
	v.pb({1, 0});
	v.pb({1, 1});

	while (n--) {
		ll x = v.back().first;
		ll y = v.back().second;
		v.pb({x + 1, y});
		v.pb({x, y + 1});
		v.pb({x + 1, y + 1});
	}

	cout << v.size() << endl;
	for (auto p : v) {
		cout << p.first << " " << p.second << endl;
	}

	return 0;
}
