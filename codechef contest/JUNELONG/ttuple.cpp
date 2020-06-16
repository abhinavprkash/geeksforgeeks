#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
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
#define ll long long int
#define pb push_back
#define rep(i , j , n) for(ll i = j ; i < n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)

using namespace std;


void solve() {
	ll a, b, c;
	ll a1, b1, c1;
	cin >> a >> b >> c >> a1 >> b1 >> c1;
	bool t1 = (a == a1);
	bool t2 = (b == b1);
	bool t3 = (c == c1);
	if (t1 && t2 && t3) {
		cout << 0 << endl;
		return;
	}
	if ((t1 && t2) || (t2 && t3) || (t1 && t3)) {
		cout <<  1  << endl;
		return;
	}
	if (t1 || t2 || t3) {
		ll x, y, x1, y1;
		if (t1) {
			x = b, x1 = b1, y = c, y1 = c1;
		}
		else if (t2) {
			x = a, x1 = a1, y = c, y1 = c1;
		}
		else if (t3) {
			x = a, x1 = a1, y = b, y1 = b1;
		}
		if (x1 - x == y1 - y) {
			cout << 1 << endl;
			return;
		}
		if (x != 0) {
			ll k = x1 / x;
			if (k * x == x1 && k * y == y1) {
				cout << 1 << endl;
				return;
			}
		}
		cout << 2 << endl;
		return;

	}
	if (a == b && b == c && c == a) {
		if (b1 != c1 && a1 != c1 && a1 != b1) {
			ll ans = 3;
			if (ans == 3) {
				ll mula = 1, mulb = 1, adda = 0, addb = 0;
				//for c
				adda = a1 - a, addb = b1 - b;
				if (a != 0 && a1 % a == 0) mula = a1 / a;
				else mula = 1;
				if (b != 0 &&  b1 % b == 0) mulb = b1 / b;
				else mulb = 1;
				if ((c + addb) * mula == c1 || c * mula + addb == c1 || (c + adda) * mulb == c1 || c * mulb + adda == c1 || c * mulb * mula == c1 || c + adda + addb == c1) {
					ans = 2;;
				}
				//for b
				adda = a1 - a, addb = c1 - c;
				if (a != 0 && a1 % a == 0) mula = a1 / a;
				else mula = 1;
				if (c != 0 && c1 % c == 0) mulb = c1 / c;
				else mulb = 1;
				if ((b + addb) * mula == b1 || b * mula + addb == b1 || (b + adda) * mulb == b1 || b * mulb + adda == b1 || b * mulb * mula == b1 || b + adda + addb == b1) {
					ans = 2;
				}
				//for c
				adda = c1 - c, addb = b1 - b;
				if (c != 0 && c1 % c == 0) mula = c1 / c;
				else mula = 1;
				if (b != 0 && b1 % b == 0) mulb = b1 / b;
				else mulb = 1;
				if ((a + addb) * mula == a1 || a * mula + addb == a1 || (a + adda) * mulb == a1 || a * mulb + adda == a1 || a * mulb * mula == a1 || a + adda + addb == a1) {
					ans = 2;
				}
			}
			cout << ans << endl;
			return;
		}
		if (b1 == c1 && a1 == c1 && a1 == b1) {
			cout << 1 << endl;
			return;
		}
		if (b1 == c1 || a1 == c1 || a1 == b1) {
			cout << 2 << endl;
			return;
		}
	}
	else {
		//case 1 = a*k + x = a1
		ll ans = 3, k;
		//for a,b
		if (a != b) {
			k = (b1 - a1) / (b - a);
			if (k * (b - a) == (b1 - a1)) {
				ll x = a1 - a * k;
				if (k == 1 || x == 0) ans = 2;
				if (c * k + x == c1 || c * k == c1 || c + x == c1 || ( k != 0 && x % k == 0 && c + x / k == c1)) {
					ans = 2;
					if (k == 1 || x == 0) {
						ans = 1;
						cout << ans << endl;
						return;
					}
					cout << ans << endl;
					return;
				}
			}
		}
		else {
			if (a1 == b1) ans = 2;
		}
		//for b,c
		if (b != c) {
			k = (b1 - c1) / (b - c);
			if (k * (b - c) == (b1 - c1)) {
				ll x = c1 - c * k;
				if (k == 1 || x == 0) ans = 2;
				if (a * k + x == a1  || a * k == a1 || a + x == a1 || ( k != 0 && x % k == 0 && a + x / k == a1)) {
					ans = 2;
					if (k == 1 || x == 0) {
						ans = 1;
						cout << ans << endl;
						return;
					}
				}
			}
		}
		else {
			if (c1 == b1) ans = 2;
		}
		//for a,c
		if (a != c) {
			k = (c1 - a1) / (c - a);
			if (k * (c - a) == (c1 - a1)) {
				ll x = a1 - a * k;
				if (k == 1 || x == 0) ans = 2;
				if (b * k + x == b1  || b * k == b1 || b + x == b1 || ( k != 0 && x % k == 0 && b + x / k == b1)) {
					ans = 2;
					if (k == 1 || x == 0) {
						ans = 1;
						cout << ans << endl;
						return;
					}
				}
			}
		}
		else {
			if (c1 == a1) ans = 2;
		}
		if (ans == 3) {
			ll mula = 1, mulb = 1, adda = 0, addb = 0;
			//for c
			adda = a1 - a, addb = b1 - b;
			if (a != 0 && a1 % a == 0) mula = a1 / a;
			else mula = 1;
			if (b != 0 &&  b1 % b == 0) mulb = b1 / b;
			else mulb = 1;
			if ((c + addb) * mula == c1 || c * mula + addb == c1 || (c + adda) * mulb == c1 || c * mulb + adda == c1 || c * mulb * mula == c1 || c + adda + addb == c1) {
				ans = 2;;
			}
			//for b
			adda = a1 - a, addb = c1 - c;
			if (a != 0 && a1 % a == 0) mula = a1 / a;
			else mula = 1;
			if (c != 0 && c1 % c == 0) mulb = c1 / c;
			else mulb = 1;
			if ((b + addb) * mula == b1 || b * mula + addb == b1 || (b + adda) * mulb == b1 || b * mulb + adda == b1 || b * mulb * mula == b1 || b + adda + addb == b1) {
				ans = 2;
			}
			//for a
			adda = c1 - c, addb = b1 - b;
			if (c != 0 && c1 % c == 0) mula = c1 / c;
			else mula = 1;
			if (b != 0 && b1 % b == 0) mulb = b1 / b;
			else mulb = 1;
			if ((a + addb) * mula == a1 || a * mula + addb == a1 || (a + adda) * mulb == a1 || a * mulb + adda == a1 || a * mulb * mula == a1 || a + adda + addb == a1) {
				ans = 2;
			}
		}
		cout << ans << endl;
		return;



	}
}

int main() {
	ll t;
	cin >> t;
	while (t--) {
		solve();
	}

}