
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
#define forn(i, n) for (int i = 0; i < int(n); ++i)

using namespace std;

const int N = 70;
const int INF = 1e9;

int a[N][N];
int dp[N][N][N][N];

int main() {


	int n, m, k;
	cin >> n >> m >> k;
	forn(i, n) forn(j, m) {
		cin >> a[i][j];
	}

	forn(i, N) forn(j, N) forn(cnt, N) forn(rem, N) dp[i][j][cnt][rem] = -INF;
	dp[0][0][0][0] = 0;
	forn(i, n) forn(j, m) forn(cnt, m / 2 + 1) forn(rem, k) {
		if (dp[i][j][cnt][rem] == -INF) continue;
		int ni = (j == m - 1 ? i + 1 : i);
		int nj = (j == m - 1 ? 0 : j + 1);
		if (i != ni) {
			dp[ni][nj][0][rem] = max(dp[ni][nj][0][rem], dp[i][j][cnt][rem]);
		} else {
			dp[ni][nj][cnt][rem] = max(dp[ni][nj][cnt][rem], dp[i][j][cnt][rem]);
		}
		if (cnt + 1 <= m / 2) {
			int nrem = (rem + a[i][j]) % k;
			if (i != ni) {
				dp[ni][nj][0][nrem] = max(dp[ni][nj][0][nrem], dp[i][j][cnt][rem] + a[i][j]);
			} else {
				dp[ni][nj][cnt + 1][nrem] = max(dp[ni][nj][cnt + 1][nrem], dp[i][j][cnt][rem] + a[i][j]);
			}
		}
	}

	cout << max(0, dp[n][0][0][0]) << endl;

	return 0;
}