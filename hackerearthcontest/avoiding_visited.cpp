#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

typedef struct {
	int c107;
	int c1361;
	int c10000019;
} all3;

int p = 1000000007;

int n, m;
vector<vector<long long> > a;
vector<vector<all3> > memo;


all3 howMany(long long n) {
	all3 these = {0, 0, 0};
	if (n % 107)
		these.c107++;
	if (n % (107 * 107))
		these.c107++;
	if (n % 1361)
		these.c1361++;
	if (n % (1361 * 1361))
		these.c1361++;
	if (n % 10000019)
		these.c10000019++;
	return these;
}

all3 f(int i, int j) {
	if (i == n - 1 && j == m - 1) {

		return howMany(a[i][j]);
	}
	if (i == n - 1) {
		all3 l = f(i, j + 1), now = howMany(a[i][j]);
		now.c107 += (l.c107 > 1) ? 2 : l.c107;
		now.c1361 += (l.c1361 > 1) ? 2 : l.c1361;
		now.c10000019 += (l.c10000019) ? 1 : 0;
		return now;
	}
	if (j == m - 1) {
		all3 l = f(i + 1, j), now = howMany(a[i][j]);
		now.c107 += (l.c107 > 1) ? 2 : l.c107;
		now.c1361 += (l.c1361 > 1) ? 2 : l.c1361;
		now.c10000019 += (l.c10000019) ? 1 : 0;
		return now;
	}
	all3 l = f(i, j + 1), now = howMany(a[i][j]), r = f(i + 1, j);
	now.c107 += (l.c107 > 1) ? 2 : l.c107 + (r.c107 > 1 ? 2 : r.c107);
	now.c1361 += (l.c1361 > 1) ? 2 : l.c1361 + (r.c1361 > 1 ? 2 : r.c1361);
	now.c10000019 += (l.c10000019) ? 1 : 0 + (r.c10000019 ? 1 : 0);
	return now;
}

long long ans(int i, int j) {
	if (i == n - 1 && j == m - 1) {
		if (memo[i][j].c107 > 1 && memo[i][j].c1361 > 1 && memo[i][j].c10000019)
			return 0;
		return 1;
	}
	if (i == n - 1) {
		all3 l = f(i, j + 1), now = howMany(a[i][j]);
		now.c107 += (l.c107 > 1) ? 2 : l.c107;
		now.c1361 += (l.c1361 > 1) ? 2 : l.c1361;
		now.c10000019 += (l.c10000019) ? 1 : 0;
		return now;
	}
	if (j == m - 1) {
		all3 l = f(i + 1, j), now = howMany(a[i][j]);
		now.c107 += (l.c107 > 1) ? 2 : l.c107;
		now.c1361 += (l.c1361 > 1) ? 2 : l.c1361;
		now.c10000019 += (l.c10000019) ? 1 : 0;
		return now;
	}
	all3 l = f(i, j + 1), now = howMany(a[i][j]), r = f(i + 1, j);
	now.c107 += (l.c107 > 1) ? 2 : l.c107 + (r.c107 > 1) ? 2 : r.c107;
	now.c1361 += (l.c1361 > 1) ? 2 : l.c1361 + (r.c1361 > 1) ? 2 : r.c1361;
	now.c10000019 += (l.c10000019) ? 1 : 0 + (r.c10000019) ? 1 : 0;
	return now;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;
	a = vector<vector<long long> > (n, vector<long long> (m));
	memo = vector<vector<all3> > (n, vector<all3> (m, NULL));
	forn(i, n)
	forn(j, m)
	cin >> a[i][j];

	cout << ans(0, 0);
}
