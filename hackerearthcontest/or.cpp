#include <bitset>
#include <iostream>

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


unsigned long long int compute(unsigned long long int A, unsigned long long int B) {
	if (A == B) return 1;
	bitset<64> a(A);
	bitset<64> b(B);
	int i, x, y;
	for (i = 63; i >= 0; i--) {
		if (a[i] != b[i]) break;
	}
	x = i;
	while (i >= 0 && !b.test(i)) i--;
	y = i;

	bitset<64> aleft, aright, bright;
	for (int j = y + 1; j <= x; j++) {
		if (a.test(j)) {
			aleft.set(j);
		}
	}
	for (i; i >= 0; i--) {
		if (a.test(i)) aright.set(i);
		if (b.test(i)) bright.set(i);
	}
	unsigned long long int ar = aright.to_ullong();
	unsigned long long int br = bright.to_ullong();
	unsigned long long int bl = 1LL << (y + 1);
	unsigned long long int al = (1LL << (x - y)) - 1;
	unsigned long long int ans = bl - br;

	if (aleft.count() == 1) {
		al -= 1;
		ans += (unsigned long long int)al * bl;
		i = 60;
		for (i; i >= 0; i--) {
			if (aright.test(i)) break;
		}
		unsigned long long int hel = 1LL << (i + 1);
		ans += min(bl, bl - br + hel);
	} else {
		ans += al * bl;
	}
	return ans;
}

int main() {
	std::ios::sync_with_stdio(false);

	unsigned long long int A, B;
	cin >> A >> B;
	cout << compute(B, A) << endl;
	return 0;
}








	