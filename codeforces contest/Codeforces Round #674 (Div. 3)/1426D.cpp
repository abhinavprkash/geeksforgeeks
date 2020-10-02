
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long 
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

void solve() {
	int n;
	cin>>n;
	map<ll, int> last;
	last[0] = 0;
	ll sum = 0;
	int ans = 0, elexieor = 0;
	for (int i = 1; i <= n; ++i) {
		int a;
		cin>>a;
		sum += a;
		if (last.count(sum) && last[sum] >= elexieor) {
			ans++;
			elexieor = i - 1;
		}
		last[sum] = i;
	}
	cout<<ans;
}
int main()
{
	std::ios::sync_with_stdio(false);
	solve();
	return 0;
}
