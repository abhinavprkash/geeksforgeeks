
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
		int n, m;
		cin >> n >> m;
		vi a, b;
		vi v(n);
		for (int &e : v)
		{
			cin >> e;
		}
		for (int &e : v)
		{
			int x;
			cin >> x;
			if (x == 1) {
				a.push_back(e);
			}
			else {
				b.push_back(e);
			}
		}
		sort(a.rbegin(), a.rend());
		sort(b.rbegin(), b.rend());
		ll curSumA = 0;
		int r = (int)b.size();
		ll curSumB = accumulate(b.begin(), b.end(), 0ll);
		int ans = INT_MAX;
		for (int l = 0; l <= a.size(); l++) {
			while (r > 0 && curSumA + curSumB - b[r - 1] >= m) {
				r--;
				curSumB -= b[r];
			}
			if (curSumB + curSumA >= m) {
				ans = min(ans, 2 * r + l);
			}
			if (l != a.size()) {
				curSumA += a[l];
			}
		}
		cout << (ans == INT_MAX ? -1 : ans) << "\n";


	}
	return 0;
}
