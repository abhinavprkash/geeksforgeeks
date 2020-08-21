
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
	int n; ll k;
	cin >>  n >> k;
	vll arr(n);
	int ct =0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	auto mx = max_element(arr.begin(), arr.end());
	ll bg = *mx;
	if (k & 1) {
		for (int i = 0; i < n; ++i)
			arr[i] = bg - arr[i];
	} else {
		while (ct < 2) {
			auto mx = max_element(arr.begin(), arr.end());
			ll val = *mx;

			for (int i = 0; i < n; ++i){
				arr[i]  = val - arr[i];
			}
			ct++;
		}
	}
	for (int i = 0; i < n; ++i) cout << arr[i] << " ";
	cout << "\n";
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
