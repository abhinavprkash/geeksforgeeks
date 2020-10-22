
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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<pair<int, int>> res;
		int idx = -1;
		for (int i = 1; i < n; ++i) {
			if (a[i] != a[0]) {
				idx = i;
				res.push_back({1, i + 1});
			}
		}
		if (idx == -1) {
			cout << "NO" << endl;
			continue;
		}
		for (int i = 1; i < n; ++i) {
			if (a[i] == a[0]) {
				res.push_back({idx + 1, i + 1});
			}
		}
		cout << "YES" << endl;
		for (auto [x, y] : res) cout << x << " " << y << endl;
	}
	
	return 0;
}
