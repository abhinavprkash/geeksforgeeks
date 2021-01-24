
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


using namespace std;

bool f(int i){
    if (i <= 0 || i > n) return 0;
    if (a[i] > max(a[i - 1], a[i + 1])) return 1;
    if (a[i] < min(a[i - 1], a[i + 1])) return 1;
    return 0;
}

bool mountain(vector<int>& a, int i, int n) {
    if (i <= 0 || i >= n-1) return false;
    return a[i-1] < a[i] && a[i+1] < a[i];
}

bool valley(vector<int>& a, int i, int n) {
    if (i <= 0 || i >= n-1) return false;
    return a[i-1] > a[i] && a[i+1] > a[i];
}

bool mountain_or_valley(vector<int>& a, int i) {
    return mountain(a, i, a.size()) || valley(a, i, a.size());
}

void solve () {
    cin >> n;
    a.resize(n + 1);
	for (int i = 1; i <= n; i++) cin >> a[i];
	int cnt = 0;
	for (int i = 2; i < n; i++) {
		if (f(i)) cnt++;
	}
	int ans = cnt;
	for (int k = 1; k < n; k++) {
		int ct = 0;
		int tmp = a[k];
		a[k] = a[k + 1];
		for (int i = max(2ll, k - 5); i <= min(n - 1, k + 5); i++) {
		    if(f(i)) ct++;
		}
		a[k] = tmp;
		tmp = 0;
		for (int i = max(2ll, k - 5); i <= min(n - 1, k + 5); i++) {
		    if (f(i)) tmp++;
		}
		ans = min(ans, cnt + ct - tmp);
	}
	for (int k = 2; k <= n; k++) {
		int ct = 0;
		int tmp = a[k];
		a[k] = a[k - 1];
		for (int i = max(2ll, k - 5); i <= min(n - 1, k + 5); i++) {
			if (f(i)) ct++;
		}
		a[k] = tmp;
		tmp = 0;
		for (int i = max(2ll, k - 5); i <= min(n - 1, k + 5); i++) {
			if (f(i)) tmp++;
		}
		ans = min(ans, cnt + ct - tmp);
	}
	cout << ans << '\n';

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
