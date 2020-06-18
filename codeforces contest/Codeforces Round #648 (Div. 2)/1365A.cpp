#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
	int n, m, t;
	cin >> n >> m;
	vector<int> c1(n, 1), c2(m, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> t;
			if (t == 1)
				c1[i] = c2[j] = 0;
		}
	}
	int cnt1 = 0, cnt2 = 0;
	for (int i : c1)
		cnt1 += i;
	for (int i : c2)
		cnt2 += i;
	if (min(cnt1, cnt2) & 1)
		cout << "Ashish\n";
	else
		cout << "Vivek\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int _n;
	cin >> _n;
	while (_n--) {
		solve();
	}
	return 0;
}