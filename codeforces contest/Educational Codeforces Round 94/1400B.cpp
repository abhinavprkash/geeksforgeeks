
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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc; cin >> tc;
	while (tc--) {
		ll p, f; cin >> p >> f;
		ll cs, cw; cin >> cs >> cw;
		ll s, w; cin >> s >> w;
		ll eve = (cs * s) + (cw * w);


		ll ans = 0;
		if (p > eve || f > eve) {
			ans = cs + cw;
		} else {
			ll mxcar = max(p, f) / (s + w);
			ll took = min(mxcar, min(cs, cw));
			ll actual = took * (s + w);
			cs -= took;
			cw -= took;
			ans += took;
			if (p > f) {
				p -= actual;
				if (p > s && cs > 0) {
					p -= s;
					ans += 1;
					cs--;
				}
				if ( p > w && cw > 0) {
					p -= w;
					ans += 1;
					cw--;
				}

				ll mn = f / (s+w);
				ll mntook = min(mn, min(cs, cw));
				ll rem = mntook *(s+w);
				cs -= mntook;
				cw -= mntook;

				if(f > s && cs > 0) {
					f-= s;
					ans += 1;
					cs--;
				}

				if(f > w && cw > 0) {
					f -= w;
					ans += 1;
					cw--;
				}

			} else {
				f -= actual;
				if (f > s && cs > 0) {
					f -= s;
					ans += 1;
					cs--;
				}
				if ( f > w && cw > 0) {
					f -= w;
					ans += 1;
					cw--;
				}

				ll mn = p / (s+w);
				ll mntook = min(mn, min(cs, cw));
				ll rem = mntook *(s+w);
				cs -= mntook;
				cw -= mntook;

				if(p > s && cs > 0) {
					p-= s;
					ans += 1;
					cs--;
				}

				if(p > w && cw > 0) {
					p -= w;
					ans += 1;
					cw--;
				}
			}
	

		}




		cout << ans << "\n";
	}

	return 0;
}