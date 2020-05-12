#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#include <queue>
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

void BFS(int **graph, int n, int sv, int *visited)
{
	queue<int> que;
	que.push(sv);
	visited[sv] = 1;

	while (!que.empty())
	{
		int v = que.front();
		que.pop();
		cout << v << " ";

		for (int i = 0; i < n; i++)
		{
			if (i == sv)
			{
				continue;
			}

			if (graph[v][i] == 1 && !visited[i])
			{
				visited[i] = 1;
				que.push(i);
			}

		}
	}
}

void bfs_disconnected(int **graph, int n)
{
	int *visited = new int[n];
	memset(visited, 0, sizeof(visited));

	for (int i = 0; i < n; i++)
	{
		if (!visited[i])
		{
			BFS(graph, n, i, visited);
		}
	}

	delete [] visited;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;

	int n, e;
	cin >> n >> e;

	int** edges = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		edges[i] = new int[n];
		for (int j = 0; j < n; ++j)
		{
			edges[i][j] = 0;
		}
	}
	for (int i = 0; i < e; ++i)
	{
		int a, b;
		cin >> a >> b;
		edges[a][b] = 1;
		edges[b][a] = 1;
	}
	bfs_disconnected(edges, n);

	for (int i = 0; i < n; ++i)
	{
		delete [] edges[i];
	}
	delete [] edges;
	return 0;
}