
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

#define fore(i, l, r) for(int i = int(l); i < int(r); i++)


using namespace std;

int n;
vi arr;

inline bool read() {
	if (!(cin >> n))
		return false;
	arr.resize(n);
	fore (i, 0, n)
	cin >> arr[i];
	return true;
}

void solve() {
	vector<int> h(n, 1e9);
	h[0] = 0;
	int lst = 0;
	fore (i, 1, n) {
		if (i - 1 > 0 && arr[i - 1] > arr[i])
			lst++;
		h[i] = h[lst] + 1;
	}
	cout << h[n - 1] << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		read();
		solve();
	}
	return 0;
}
