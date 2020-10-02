
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

using namespace std;

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	ll a = 0, ab = 0, abc = 0, t = 1;
	int q = 0;
	for (char c : s) {
		switch (c) {
		case 'a':
			a = (a + t) % mod;
			break;
		case 'b':
			ab = (ab + a) % mod;
			break;
		case 'c':
			abc = (abc + ab) % mod;
			break;
		default:
			ll na = a, nab = ab, nabc = abc;
			na = (a * 3 + t) % mod;
			nab = (ab * 3 + a) % mod;
			nabc = (abc * 3 + ab) % mod;
			t = t * 3 % mod;
			a = na, ab = nab, abc = nabc;
		}
	}
	cout << abc;
}

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	solve();
	return 0;
}
