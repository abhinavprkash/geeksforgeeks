
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

	
	using namespace std;
	vi adj[200001];
	int n,m,a,b,c;

	vi bfs(int src){
		queue<int> q;
		vector<bool> used(n+1);
		vi d(n+1);
		q.push(src);
		used[src]=true;

		while(!q.empty()) 
		{
		   	int v = q.front();
		   	q.pop();
		   	for (int u:adj[v])
		   	{
		   		if (!used[u])
		   		{
		   			used[u] = true;
		   			q.push(u);
		   			d[u] = d[v]+1;
		   		}
		   	}
		}
		return d;
	}

	int32_t main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			cin>>n>>m>>a>>b>>c;
			int* p = new int[m+1];
			for (int i = 1; i <= n; ++i)
				adj[i].clear();
			for (int i = 1; i <= m; ++i)
				cin>>p[i];
			sort(p+1,p+m+1);
			p[0] = 0;

			for (int i = 1; i <= m; ++i)
				p[i] +=p[i-1];
			int mv =m;
			while(m--) {
			    int u,v; cin>>u>>v;
			    adj[u].pb(v);
			    adj[v].pb(u);

			}
			vi ad = bfs(a);
			vi bd = bfs(b);
			vi cd = bfs(c);
			int ans = inf;

			for (int d = 1; d <= n; ++d)
		{
			int id = ad[d] + bd[d] + cd[d];
			int ext = bd[d];
 
			if (id > mv)
				continue;
 
			int cur = p[ext] + p[id];
 
			ans = min(ans, cur);
		}
 
		cout << ans << '\n';
		}
		return 0;
	}
