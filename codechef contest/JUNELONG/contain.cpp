
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


void process() {
	int n, q;
	cin >> n >> q;
	int min_x = 5000, max_x = 0, min_y = 5000, max_y = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		min_x = min(min_x, x);
		min_y = min(min_y, y);
		max_x = max(max_x, x);
		max_y = max(max_y, y);
	}
	int c = 0;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		if (a >= min_x && a <= max_x && b >= min_y && b <= max_y) {
			c++;
		} else {
			c = 0;
		}
		cout << c << "\n";
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		process();
	}
	return 0;
}