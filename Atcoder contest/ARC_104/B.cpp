
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

bool matches(char a, char b) {
	return (a == 'A' && b == 'T') || (a == 'T' && b == 'A') || (a == 'G' && b == 'C') || (a == 'C' && b == 'G');
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n; string s;
	cin >> n >> s;
	int ct = 2;
	ll ans = 0;
	int i = 0;
	int curr = 0;
	int as = 0, ts = 0, cs = 0, gs = 0;
	bool breaks = false;
	bool enters = false;
	while (i + 1 < n) {
		if (s[i] == 'A') as++;
		if (s[i] == 'T') ts++;
		if (s[i] == 'C') cs++;
		if (s[i] == 'G') gs++;
		if (matches(s[i], s[i + 1])) {
			curr++;
			if (curr == 3) {
				ans += 4;
				curr = 0;
			}
		} else {
			ans += curr;
			curr = 0;
			enters = true;
		}
		i++;
	}
	if (s[i] == 'A') as++;
	if (s[i] == 'T') ts++;
	if (s[i] == 'C') cs++;
	if (s[i] == 'G') gs++;
	breaks = as == ts && cs == gs;
	if (breaks && enters) ans += 1;
	cout << ans << "\n";
	return 0;
}
