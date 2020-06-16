
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
	int n;
	cin >> n;
	int arr[n + 9];
	int c5 = 0, c10 = 0, c15 = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == 5)c5++;
		if (arr[i] == 10)
		{
			if (c5 > 0) {
				c5--;
				c10++;
				continue;
			} else {
				cout << "NO" << endl; return;
			}
		}
		if (arr[i] == 15)
		{
			if (c10 > 0) {
				c10--;
				c15++;
				continue;
			}
			if (c5 >= 2)
			{
				c5--;
				c5--;
				c15++;
				continue;
			}
			else {
				cout << "NO" << endl; return;
			}
		}
	}
	cout << "YES" << endl;
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
}