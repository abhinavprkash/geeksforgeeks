
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cstring>
#include <cmath>
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

void marker(int ** edges, int n, int * visited, int sv) {
	if (n == 1) {
		visited[sv] = 1;
		return;
	}
	visited[sv] = 1;
	for (int i = 0; i < n; ++i)
	{
		if (edges[sv][i] == 1 && visited[i] == 0)
		{
			marker(edges, n, visited, i);
		}
	}
	return;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n, e;
	cin >> n >> e;
	int ** edges = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		edges[i] = new int[n];
		for (int j = 0; j < n; ++j)
		{
			edges[i][j] = 0;
		}
	}

	int * visited = new int[n];

	for (int i = 0; i < n; ++i)
	{
		visited[i] = 0;
	}
	for (int i = 0; i < e; ++i)
	{
		int a, b;
		cin >> a >> b;
		edges[a][b] = 1;
		edges[b][a] = 1;
	}

	marker(edges, n, visited, 0);

	for (int i = 0; i < n; ++i)
	{
		if (visited[i] == 0)
		{
			cout << "false" << endl;
			return 0;
		}
	}
	cout << "true" << endl;

	return 0;
}
