
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

int indexOf(vi arr, int n, int x, int p) {
	int min = mod, min_index;
	for (int i = 0; i < n; i++)
		if (arr[i] == x) {
			if (abs(p - i) < min) {
				min = abs(p - i);
				min_index = i;
			}
		}
	return min_index;
}

void solve() {
	int N, X, p, k;
	cin >> N >> X >> p >> k;
	vi arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	int index = indexOf(arr, N, X, p);
	int count = 0;
	if (arr[index] != X) {
		arr[k - 1] = X;
		sort(arr.begin(), arr.end());
		count++;
	}
	if (arr[p - 1] == X) {
		cout << 0 + count<<endl;
		return;
	}
	if (p < k && arr[p - 1] < X) {
		cout << -1<<endl;
		return;
	}
	if (p > k && arr[p - 1] > X) {
		cout << -1<<endl;
		return;
	}
	index = indexOf(arr, N, X, p) + 1;
	cout << abs(p - index) + count<<endl;
}

void solve2(){
	ll n, x, p, k;
		cin >> n >> x >> p >> k;
		if (n == 0 || n == 1)
		{
			cout << -1 << endl;
			//continue;
		}
		vll arr(n);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		sort(arr.begin(), arr.end());
		ll count = 0;
		while (arr[p - 1] != x && count < n)
		{
			count++;
			arr[k - 1] = x;
			sort(arr.begin(), arr.end());
		}

		if (count == n)
		{
			cout << -1 << endl;
			//continue;
		}
		cout << count << endl;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}