
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

vi path;

void getPathDFS(int **graph, int n, int *visited, int sv, int ev) {
	visited[sv] = true;
	if (sv == ev)
	{
		path.push_back(ev);
		return;
	}
	for (int i = 0; i < n; ++i)
	{
		if (i == sv)
		{
			continue;
		}
		if (graph[sv][i] == 1)
		{
			if (visited[i])
			{
				continue;
			}
			else {
				getPathDFS(graph, n, visited, i, ev);
				if (!path.empty())
				{
					path.push_back(sv);
					return;
				}
			}
		}
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	int n, e;
	cin >> n >> e;
	int **graph = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		graph[i] = new int[n];
		for (int j = 0; j < n; ++j)
			graph[i][j] = 0;
	}
	for (int i = 0; i < e; ++i)
	{
		int f, s;
		cin >> f >> s;
		graph[f][s] = 1;
		graph[s][f] = 1;
	}
	int start, end;
	cin >> start >> end;

	int * visited = new int[n];
	for (int i = 0; i < n; ++i)
		visited[i] = 0;

	getPathDFS(graph, n, visited, start, end);

	for (int i = 0; i < path.size(); ++i)
		cout << path[i] << " ";

	for (int i = 0; i < n; ++i)
	{
		delete [] graph[i];
	}
	delete [] graph;
	delete [] visited;
	return 0;
}
