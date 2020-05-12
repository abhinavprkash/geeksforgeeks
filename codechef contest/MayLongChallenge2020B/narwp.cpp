#include<bits/stdc++.h>
    #define ll int
    #define vll vector<ll >
    #define vl vector<ll> 
    #define vvl vector<vl >
    #define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
    #define loop(x, n) for(long long x = 0; x < n; x++)
    #define _input(arr, NN) loop(ii, NN)cin>>arr[ii];
    #define input2(arr, NN, MM) loop(ii, NN)loop(jj, MM)cin>>arr[ii][jj]
    #define ini(arr, N) loop(ii, N)scanf("%d", &arr[ii]);
    #define pll pair<ll, ll> 
    #define ff first
    #define pb push_back
    #define ss second
    #define vvll vector<vll >
    #define umap unordered_map
    #define str to_string
    #define MAX 1000000000

using namespace std;



ll bfs(vvll rGraph, ll s, ll t, ll parent[]) 
{ 
    ll V = rGraph.size();
    bool visited[V]; 
    memset(visited, 0, sizeof(visited)); 
  
    queue <ll> q; 
    q.push(s); 
    visited[s] = true; 
    parent[s] = -1; 
  
    while (!q.empty()) 
    { 
        ll u = q.front(); 
        q.pop(); 
  
        for (ll v=0; v<V; v++) 
        { 
            if (visited[v]==false && rGraph[u][v] > 0) 
            { 
                q.push(v); 
                parent[v] = u; 
                visited[v] = true; 
            } 
        } 
    } 
    return (visited[t] == true); 
} 

void dfs(vvll rGraph, ll s, bool visited[]) 
{ 
    ll V = rGraph.size();
    visited[s] = true; 
    stack<ll> st;
    st.push(s);
    while(!st.empty())
    {
        ll u = st.top();
        bool flag = true;
        for(ll v = 0; v < V; v++)
        {
            if(rGraph[u][v] && !visited[v])
            {
                flag = false;
                visited[v] = true;
                st.push(v);
                break;
            }
        }
        if(flag)st.pop();
    }
    return;
} 
  
void minCut(vvll graph, ll s, ll t, ll alsum) 
{ 
    fastio;
    ll V = graph.size();
    ll u, v; 

    vector<vll > rGraph(V);
    vll tGraph(V);
    for(ll n = 0; n < V; n++)tGraph[n] = 0;
        for(ll n = 0; n < V; n++)rGraph[n] = tGraph;
    for (u = 0; u < V; u++) 
        for (v = 0; v < V; v++) 
             rGraph[u][v] = graph[u][v]; 
  
    ll parent[V]; 
  
    while (bfs(rGraph, s, t, parent)) 
    { 
        ll path_flow = INT_MAX; 
        for (v=t; v!=s; v=parent[v]) 
        { 
            u = parent[v]; 
            path_flow = min(path_flow, rGraph[u][v]); 
        } 
  
        for (v=t; v != s; v=parent[v]) 
        { 
            u = parent[v]; 
            rGraph[u][v] -= path_flow; 
            rGraph[v][u] += path_flow; 
        } 
    } 
  
    bool visited[V]; 
    memset(visited, false, sizeof(visited)); 
    dfs(rGraph, s, visited); 

    ll cost = 0;
    for (ll i = 0; i < V; i++) 
      for (ll j = 0; j < V; j++) 
         if (visited[i] && !visited[j] && graph[i][j]) 
              cost += graph[i][j] + graph[j][i];
    cout<<alsum-cost<<endl;
    for(ll i = V/2; i < V-1; i++)
    {
        if(visited[i])cout<<1<<" ";
        else cout<<-1<<" ";
    }
    cout<<"\n";
    return; 
} 


int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
    {
        ll H, W, N;
        cin>>H>>W>>N;
        ll arr[H][W];
        bool points[H][W];
        loop(h, H)
        {
            loop(w, W)
            {
                points[h][w] = false;
                cin>>arr[h][w];
            }
        }

        vector<pair<pll, ll > >  P(N);

        pair<pll, ll> p;
        pll pt;
        umap<ll, ll> idx;
        for(int n = 0; n < N; n++)
        {
            cin>>pt.ff>>pt.ss;
            pt.ff--;pt.ss--;
            cin>>p.ss;
            p.ff=pt;
            points[pt.ff][pt.ss] = true;
            P[n] = p;
            idx[pt.ff*W + pt.ss] = n;
        }
        
        vector<vll > graph(2*N+2);
        vll tgraph(2*N+2);
        for(ll n = 0; n < 2*N+2; n++)tgraph[n] = 0;
        for(ll n = 0; n < 2*N+2; n++)graph[n] = tgraph;
        ll s = 0;

        for(ll n = 0; n <N; n++)
        {
            if(arr[P[n].ff.ff][P[n].ff.ss] > 0)
            {
                graph[n+1][N+n+1] = graph[N+n+1][n+1] = abs(P[n].ss*arr[P[n].ff.ff][P[n].ff.ss]);
                s+=abs(P[n].ss*arr[P[n].ff.ff][P[n].ff.ss]);
                graph[0][n+1] = MAX;
            }
            else 
            {
                graph[n+1][2*N+1] = MAX;
                graph[N+n+1][n+1] = graph[n+1][N+n+1] = abs(P[n].ss*arr[P[n].ff.ff][P[n].ff.ss]);
                s += abs(P[n].ss*arr[P[n].ff.ff][P[n].ff.ss]);
            }

            if(P[n].ff.ff < H-1 && points[P[n].ff.ff+1][P[n].ff.ss])
            {
                ll id = N+idx[(P[n].ff.ff+1)*W + P[n].ff.ss]+1;
                ll idn = N+n+1;
                graph[id][idn] = graph[idn][id] = abs(P[n].ss * P[id - N-1].ss);
                s += abs(P[n].ss * P[id - N-1].ss);
            }
            if(P[n].ff.ss < W-1 && points[P[n].ff.ff][P[n].ff.ss +1])
            {
                ll id = N+idx[(P[n].ff.ff)*W + P[n].ff.ss + 1]+1;
                ll idn = N+n+1;
                graph[id][idn] = graph[idn][id] = abs(P[n].ss * P[id - N-1].ss);
                s += abs( P[n].ss * P[id - N-1].ss);
            }
        }
        minCut(graph, 0, 2*N+1, s);
    }
    return 0;
}