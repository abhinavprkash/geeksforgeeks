
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

using namespace std;

void solve() {
	int n;
	cin >> n;
	vi arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		--arr[i];
	}
	sort(arr.begin(), arr.end());
	vector<vector<int>> dp(n + 1, vi(2 * n, 1e9));
	dp[0][0] = 0;
	for (int i = 0; i < n + 1; ++i)
	{
		for (int j = 0; j < 2 * n - 1; ++j) {
			if (dp[i][j] < 1e9)
			{
				if (i < n)
				{
					dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + abs(arr[i] - j));
				}
				dp[i][j + 1] = min(dp[i][j + 1], dp[i][j]);
			}
		}
	}
	cout<<dp[n][2*n-1]<<endl;
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
