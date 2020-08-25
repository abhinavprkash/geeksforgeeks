
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

void solve() {
	ll n;
	cin >> n;
	vll arr(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}
	bool b = false;
	int j = 3;
	for (int i = 3; i <= n; ++i)
	{
		if (arr[1] + arr[2] <= arr[i])
		{
			j = i;
			b = true;
			break;
		}
	}
	if (b) { cout << 1 << " " << 2 << " " << j << "\n";  }
	else {   cout << "-1\n";   }

}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		solve();
	}
	return 0;
}
