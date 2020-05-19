
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
	ll  t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll  sm = 0, extra = 0, tmp;
		tmp = n / k;
		while (tmp)
		{
			sm += (n * (n + 1)) / 2;
			extra = k * (tmp * (tmp + 1)) / 2;
			sm -= extra;
			n /= k;
			tmp = n / k;
		}
		sm += (n * (n + 1)) / 2;
		extra = k * (tmp * (tmp + 1)) / 2;
		sm -= extra;

		cout << sm << endl;

	}
	return 0;
}