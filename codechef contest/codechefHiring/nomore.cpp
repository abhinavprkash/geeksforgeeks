#include<bits/stdc++.h> 
using namespace std; 

// function for finding minimum no. of edge 
// using BFS 
int minEdgeBFS(vector <int> edges[], int u, 
							int v, int n) 
{ 
	// visited[n] for keeping track of visited 
	// node in BFS 
	vector<bool> visited(n, 0); 

	// Initialize distances as 0 
	vector<int> distance(n, 0); 

	// queue to do BFS. 
	queue <int> Q; 
	distance[u] = 0; 

	Q.push(u); 
	visited[u] = true; 
	while (!Q.empty()) 
	{ 
		int x = Q.front(); 
		Q.pop(); 

		for (int i=0; i<edges[x].size(); i++) 
		{ 
			if (visited[edges[x][i]]) 
				continue; 

			// update distance for i 
			distance[edges[x][i]] = distance[x] + 1; 
			Q.push(edges[x][i]); 
			visited[edges[x][i]] = 1; 
		} 
	} 
	return distance[v]; 
} 

// function for addition of edge 
void addEdge(vector <int> edges[], int u, int v) 
{ 
edges[u].push_back(v); 
edges[v].push_back(u); 
} 

// Driver function 
int main() 
{ 
	// To store adjacency list of graph 
	int n = 4; 
	vector <int> edges[4]; 
	addEdge(edges, 3, 3); 
	addEdge(edges, 1, 2); 
	addEdge(edges, 2, 3);
  	addEdge(edges, 3, 1);
	
	int u = 0; 
	int v = 5; 
	cout << minEdgeBFS(edges, u, v, n); 
	return 0; 
} 
