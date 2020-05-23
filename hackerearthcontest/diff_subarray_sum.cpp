#include "bits/stdc++.h"
using namespace std;
int t;
int n , s;
bool check(int x) {
	if (x == s) {
		return 1;
	}
	int sz1 = (s / x) + 1;
	int cnt1 = s % x;
	int sz2 = s / x;
	int cnt2 = x - cnt1 - 1;
	int cnt = ((sz1 >> 1) + (sz1 & 1)) * cnt1;
	cnt += ceil(sz1 / 2) * cnt2;
	sz1 -= 2;
	cnt += ((sz1 >> 1) + (sz1 & 1));
	return cnt < n;
}
int main()
{
	cin >> n;
	long result = 0;
	vector < int > ans;
	for (int i = 1 ; i <= n; ++i) {
		if (check(i)) {
			ans.push_back(i);
		}
	}
	for (int i = 0; i < n; i++) {
		result += (ans[i] * (i + 1) * (n - i));

		cout << result << " ";
	}
	cout << ans.size() << endl;
	for (int x : ans) {
		cout << result << " ";
	}
	cout << endl;
}