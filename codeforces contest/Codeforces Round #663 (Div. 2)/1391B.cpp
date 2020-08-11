
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
#define vvc vector<vector<char>>
#define vc vector<char>
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

void solve(vvc v)
{
	int n = v.size(), m = v[0].size();
	int luggace_change = 0;
	for (int i = 0; i < m - 1; i++)
	{
		luggace_change += (v[n - 1][i] != 'R');
	}
	for (int i = 0; i < n - 1; i++)
	{
		luggace_change += (v[i][m - 1] != 'D');
	}
	cout<< luggace_change<<endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n, m;
		cin >> n >> m;
		vvc direction_chnge(n);
		for (int i = 0; i < n; i++)
		{
			vc loc(m);
			for (int j = 0; j < m; j++)
			{
				cin >> loc[j];
			}
			direction_chnge[i] = loc;
		}
		solve(direction_chnge);
	}
	return 0;
}
