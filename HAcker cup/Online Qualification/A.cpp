
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

void solve() {
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	vvi arr(n);
	for (auto i = 0; i < n; i++) {
		arr[i] = vi(n, 0);
		arr[i][i] = 1;
		if (b[i] == 'N')
			continue;
		if (i > 0 && a[i - 1] == 'Y')
			arr[i][i - 1]  = 1;
		if (i + 1 < n && a[i + 1] == 'Y')
			arr[i][i + 1] = 1;

	}
	for (auto i = 0; i < n; ++i)
	{
		for (auto j = 0; j < n; ++j)
		{
			for (auto k = 0; k < n; ++k)
			{
				if (arr[i][j] && arr[j][k])
				{
					arr[i][k] = 1;
				}
			}
		}
	}
	for (auto i = 0; i < n; ++i)
	{
		for (auto j = 0; j < n; ++j)
		{
			if (arr[i][j])
			{
				cout << "Y";
			}
			else {
				cout << "N";
			}

		}
		cout << endl;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);

	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{

		cout << "Case #" << t << ":"  << endl;
		solve();

	}

	return 0;
}
