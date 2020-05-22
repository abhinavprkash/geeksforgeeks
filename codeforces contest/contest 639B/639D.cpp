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
#define pb              push_back
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


using namespace std;

string arr[1000];

class union_find
{

public:
	int *pr;
	int *sz;

	union_find(int n)
	{
		pr = new int[n + 1];
		sz = new int[n + 1];

		for (int i = 0; i < n; ++i)
			pr[i] = i, sz[i] = 1;
	}

	int root(int i)
	{
		if (pr[i] == i)
			return i;

		return pr[i] = root(pr[pr[i]]);
	}

	int find(int i, int j)
	{
		return (root(i) == root(j));
	}

	int un(int i, int j)
	{
		int u = root(i);
		int v = root(j);

		if (u == v)
			return 0;

		if (sz[u] < sz[v])
			swap(u, v);

		pr[v] = u;
		sz[u] += sz[v];

		return 1;
	}
};

int n, m;

int code(int i, int j)
{
	return m * i + j;
}

int32_t main()
{
	FIO;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	//Put S magnet on every black cell, and every (a-w row as well as a-w col).
	//Check if every row and column is covered.

	set<int> rw, cl;

	vector<bool> aw_row(n, 0), aw_col(m, 0);

	for (int i = 0; i < n; ++i)
	{
		bool found_black = 0;
		for (int j = 0; j < m; ++j)
		{
			if (arr[i][j] == '#')
			{
				rw.insert(i), cl.insert(j);
				found_black = 1;
			}
		}

		if (!found_black)
			aw_row[i] = 1;
	}

	for (int j = 0; j < m; ++j)
	{
		bool found_black = 0;

		for (int i = 0; i < n; ++i)
			if (arr[i][j] == '#')
			{
				found_black = 1;
				break;
			}

		if (!found_black)
			aw_col[j] = 1;

	}

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (aw_row[i] && aw_col[j])
				rw.insert(i), cl.insert(j);

	if (rw.size() < n || cl.size() < m)
	{
		cout << -1 << '\n';
		return 0;
	}

	int can = 1;
	//For every row/col, there shouldn't be more than 1 segment of black cells
	for (int i = 0; i < n; ++i)
	{
		vi v;
		for (int j = 0; j < m; ++j)
			if (arr[i][j] == '#')
				v.pb(j);

		for (int i = 1; i < v.size(); ++i)
			if (v[i] > v[i - 1] + 1)
			{
				can = 0;
				break;
			}
	}

	for (int j = 0; j < m; ++j)
	{
		vi v;
		for (int i = 0; i < n; ++i)
			if (arr[i][j] == '#')
				v.pb(i);

		for (int i = 1; i < v.size(); ++i)
			if (v[i] > v[i - 1] + 1)
			{
				can = 0;
				break;
			}
	}

	if (!can)
	{
		cout << -1 << '\n';
		return 0;
	}

	//answer exists
	union_find dsu(n * m);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (arr[i][j] == '.')
				continue;

			if (i + 1 < n && arr[i + 1][j] == '#')
				dsu.un(code(i, j), code(i + 1, j));

			if (i - 1 >= 0 && arr[i - 1][j] == '#')
				dsu.un(code(i, j), code(i - 1, j));

			if (j + 1 < m && arr[i][j + 1] == '#')
				dsu.un(code(i, j), code(i, j + 1));

			if (j - 1 >= 0 && arr[i][j - 1] == '#')
				dsu.un(code(i, j), code(i, j - 1));
		}
	}

	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (arr[i][j] == '.')
				continue;

			int num = code(i, j);

			if (dsu.root(num) == num)
				ans++;
		}
	}

	cout << ans << '\n';

	return 0;
}