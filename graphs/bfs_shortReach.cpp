
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

void solve(int num_of_nodes, int start_node, const vector<list<int>>& edges) {
	vi length_to_nodes(num_of_nodes + 1, -1);
	queue<int> q;
	length_to_nodes[start_node] = 0;
	q.push(start_node);

	while (!q.empty()) {
		int current_node = q.front();
		q.pop();
		for (auto node : edges[current_node])
		{
			if (length_to_nodes[node] == -1)
			{
				length_to_nodes[node] =  length_to_nodes[current_node] + 6;
				q.push(node);
			}
		}
	}
	for (int i = 1; i < length_to_nodes.size(); ++i)
	{
		if (length_to_nodes[i] != 0)
			cout << length_to_nodes[i] << " ";
	}
	cout << endl;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int nodes, num_edge;
		cin >> nodes >> num_edge;
		vector<list<int>> edges(nodes + 1);
		for (int i = 0; i < num_edge; ++i)
		{
			int node_1, node_2;
			cin >> node_1 >> node_2;
			edges[node_1].push_back(node_2);
			edges[node_2].push_back(node_1);
		}
		int start_node;
		cin >> start_node;
		solve(nodes, start_node, edges);
	}
	return 0;
}
