
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

void solve()
{
	int n;
	cin >> n;
	vi a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[i] == a[j])
			{
				continue;
			}
			int sum = a[i] + a[j];
			int dif = a[i] - a[j];
			for (int k = j + 1; k < n; ++k)
			{
				if (a[i] == a[k] || a[j] == a[k]) {
					continue;
				}
				if (sum > a[k] && dif+ a[k] > 0
				        && a[k] > dif) {
					res++;
				}
			}
		}
	}
	cout<<res<<endl;

}
int main()
{
	std::ios::sync_with_stdio(false);
		solve();

	return 0;
}
