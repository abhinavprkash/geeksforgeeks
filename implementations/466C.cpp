//C. Number of Ways

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
	int n;
	cin >> n;
	vll arr(n), temp(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	temp[0] = arr[0];
	for (int i = 1; i < n; i++) {
		temp[i] = temp[i - 1] + arr[i];
	}
	if (temp[n - 1] % 3 != 0) {
		cout << 0 << endl;
		return 0;
	}

	ll ss = temp[n - 1] / 3, count = 0, ans = 0;
	for (int i = 0; i < n - 1; i++) {
		if (temp[i] == 2 * ss) ans = ans + count;
		if (temp[i] == ss) count++;
	}

	cout << ans << endl;
	return 0;
}