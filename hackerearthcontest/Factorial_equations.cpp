
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
int MOD(int a, int b, int n) {
	long long x = 1, y = a;
	while (b > 0) {
		if (b % 2 == 1) {
			x = (x * y) % n;
		}
		y = (y * y) % n;
		b /= 2;
	}
	return x % n;
}
int factmod(int n, int p) {
	int res = 1;
	while (n > 1) {
		res = (res * ((n / p) % 2 ?  p - 1 : 1)) % p;
		for (int i = 2; i <= n % p; ++i)
			res = (res * i) % p;
		n /= p;
	}
	return res % p;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, b;
	cin >> a >> b ;
	cout << MOD(a, factmod(b, 10), 10) % 10 << endl;
	return 0;
}