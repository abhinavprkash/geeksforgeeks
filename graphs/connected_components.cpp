
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
#define pb push_back

using namespace std;

void dfs(vi* edges, int start, unordered_set<int>* component, bool* visited){
	visited[start] = true;
	component->insert(start);
	for (int i = 0; i < edges[start].size(); ++i)
	{
		int next =  edges[start][i];
		if (!visited[next])
		{
			dfs(edges, next, component, visited);
		}
	}
}

unordered_set<unordered_set<int>*>* getComponents(vi* edges, int n){
	bool * visited = new bool[n];
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false;
	}
	unordered_set<unordered_set<int>*>* output = new unordered_set<unordered_set<int>*>();
	for (int i = 0; i < n; ++i)
	{
		if (!visited[i])
		{
			unordered_set<int>* component = new unordered_set<int>();
			dfs(edges, i, component, visited);
			output->insert(component);
		}
	}
	delete[] visited;
	return output;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int>* edges = new vector<int> [n];
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int j, k;
		cin>>j>>k;
		edges[j-1].pb(k-1);
		edges[k-1].pb(j-1);
	}
	unordered_set<unordered_set<int>*>* components = getComponents(edges, n);
	unordered_set<unordered_set<int>*>::iterator it1 = components->begin();
	while(it1 != components->end()) {
	  	unordered_set<int>* component = *it1;
	  	unordered_set<int>::iterator it2 = component->begin();
	  	while(it2 != component->end()) {
	  	    cout<<*it2+1<<" ";
	  	    it2++;
	  	}
	  	cout<<endl;
	  	delete component;
	  	it1++;
	}
	delete components;
	delete [] edges;
	return 0;
}
