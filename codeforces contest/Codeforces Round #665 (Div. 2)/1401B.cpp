
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
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		vector<ll>a(3);
		vector<ll>b(3);
		for (int i = 0; i < 3; i++)
			cin >> a[i];
		for (int i = 0; i < 3; i++)
			cin >> b[i];
		ll total = 0;
		ll mini = min(a[2], b[1]);
		total += 2LL * mini;
		a[2] -= mini;
		b[1] -= mini;
		ll maxi = max(0LL, b[2] - a[2] - a[0]);
		total -= 2LL * maxi;
		cout << total << "\n";
	}
	return 0;
}
