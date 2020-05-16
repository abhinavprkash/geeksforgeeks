
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

void connected(bool** edges, int n, int sv, int *visited) {
	int init = sv;
	while (init < n) {
		if (visited[init] != 0)
		{
			init++;
			continue;
		}
		visited[init] = 1;
		queue<int> q;
		q.push(init);
		init++;
		vi v1;
		while (!q.empty()) {
			int x = q.front();
			v1.push_back(x);
			q.pop();
			for (int i = 0; i < n; i++)
			{
				if (edges[x][i] && !visited[i] )
				{
					q.push(i);
					visited[i] = 1;
				}
			}
		}
		sort(v1.begin(), v1.end());
		for (int i = 0; i < v1.size(); i++) {
			cout << v1[i] << " ";
		}
		cout << endl;
	}

	return;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int V, E;
	cin >> V >> E;

	bool** edges = new bool*[V];
	for (int i = 0; i < V; i++) {
		edges[i] = new bool[V];
		for (int j = 0; j < V; j++) {
			edges[i][j] = 0;
		}
	}

	for (int i = 0; i < E; i++) {
		int f, s;
		cin >> f;
		cin >> s;

		edges[f][s] = 1;
		edges[s][f] = 1;


	}

	int *visited = new int[V];
	for (int i = 0; i < V; i++)
		visited[i] = 0;

	connected(edges, V, 0 , visited);
	return 0;
}
