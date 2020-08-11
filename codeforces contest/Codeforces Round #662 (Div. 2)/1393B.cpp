
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

const int maxN = 1e5 + 5;
int a[maxN];
int cnt[maxN];

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		a[x]++;
		cnt[a[x]]++;

	}
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		char c;
		cin >> c;
		int x;
		cin >> x;
		if (c == '+')
		{
			a[x]++;
			cnt[a[x]]++;

		} else {
			cnt[a[x]]--;
			a[x]--;
		}
		if (cnt[8] > 0 || (cnt[4] >= 2) || (cnt[6] > 0 && cnt[2] >= 2) || (cnt[4] > 0 && cnt[2] >= 3))

			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	return;
}

int main()
{
	std::ios::sync_with_stdio(false);
	solve();
	return 0;
}
