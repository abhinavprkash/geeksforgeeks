
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
#define rep(i,n) for(int i=0;i<n;i++)

#define s second

using namespace std;
int main()
{
	int t;
	cin >> t;
	vector<ll>n(t);
	vector<ll>s(t);
	vector<ll>k(t);
	rep(i, t)cin >> n[i] >> s[i] >> k[i];
	rep(i, t) {
		bool flag = false;
		if ((n[i] - s[i]) % k[i] != 0 && n[i] % k[i] == 0) {
			cout << -1 << endl;
			flag = true;
		}
		if (flag)continue;
		ll x = n[i] - s[i];
		for (int j = 0;; j++) {
			if (x % k[i] == 0) {
				cout << x / k[i] << endl;
				break;
			}
			x += n[i];
		}
	}

	return 0;
}
