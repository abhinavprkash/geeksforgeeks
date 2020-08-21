
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
ll dp[2000007];

void solve() {
	int n; cin >> n;
	vll arr(n);
	ll ans = 0;
	/*for (int i = 0; i < n; ++i)
	 {
		cin >> arr[i];
	}
	int i = 1;
	while (i < n) {
		if (arr[i] < arr[i - 1]) {
			int j = i + 1;
			ll minimum = arr[i];
			ll maximum = arr[i];
			while (j < n && arr[j] < arr[i - 1]) {
				minimum = min(minimum, arr[j]);
				maximum = max(maximum, arr[j]);

				if (j + 1 < n && arr[j] <= arr[j + 1]) {
					j++;
				} else {
					break;
				}
			}
			ans += maximum - minimum;
			ans += arr[i - 1] - maximum;
			arr[j] = arr[i - 1];
			i = j + 1;
		} else {
			i++;
		}
	}
	cout << ans << endl;*/
		memset(dp, 127, sizeof dp);
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
		}
		dp[0] = 0;

		for(int i = 1; i < n; i++) {
			dp[i] = dp[i-1];
			if(arr[i] < arr[i-1]) {
				dp[i] = dp[i] + arr[i-1] -arr[i];
			}
		}
		cout << dp[n-1] << "\n";
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


