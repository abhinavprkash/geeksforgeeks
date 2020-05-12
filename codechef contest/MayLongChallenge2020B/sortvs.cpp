
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
int main()
{
    std::ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin>>N>>M;
        int arr[N];
        bool graph[N][N];
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                graph[i][j] = false;
        for(int n = 0; n < N; n++)
        {
            cin>>arr[n];
            arr[n]--;
        }
        int x, y;
        for(int m = 0; m < M; m++)
        {   
            cin>>x>>y;
            graph[x-1][y-1] = graph[y-1][x-1] = true;
        }
        int id = 0;
        int group[N] = {0};
        bool visited[N];
        memset(visited, false, sizeof(visited));

        for(int n = 0; n < N; n++)
        {
            if(!visited[n])
            {
                id++;
                queue<int> q;
                q.push(n);
                visited[n] = true;
                group[n] = id-1;
                while(!q.empty())
                {
                    int u = q.front();
                    q.pop();
                    for(int v = 0; v < N; v++)
                    {
                        if(!visited[v] && graph[u][v])
                        {
                            visited[v] = true;
                            group[v] = id-1;
                            q.push(v);
                        }
                    }
                }
            }
        }



        int cross[id][id];
        for(int i = 0; i < id; i++)
            for(int j = 0; j < id; j++)
                cross[i][j] = 0;

        for(int n = 0; n < N; n++)
            cross[group[n]][group[arr[n]]]++;
        
        for(int n = 0; n < id; n++)
            cross[n][n]=0;
        
        int num = 0;
        
        

        for(int k = 0; k < N; k++)
        {
            
            for(int i = 0; i < id; i++)
            {
                for(int j = 0; j < id; j++)
                {
                    if(cross[i][j] > 0 && i!=j)
                    {
                        
                        bool visit[id];
                        memset(visit, false, sizeof(visit));
                        vector<int> st;
                        st.pb(i);
                        visit[i] = true;
                        bool flag = false;
                        int ele;
                        while(!st.empty())
                        {
                            flag = true;
                            int u = st.back();
                            for(int vv = st.size()-1; vv >= 0; vv--)
                            {
                                if(cross[u][st[vv]] > 0)
                                {
                                    flag = false;
                                    ele = st[vv];
                                    break;
                                }
                            }
                            if(flag)
                            {
                                for(int v = 0; v < id; v++)
                                {
                                    if(cross[u][v] > 0)
                                    {
                                        if(!visit[v])
                                        {
                                            st.pb(v);
                                            visit[v] = true;
                                            break;
                                        }
                                        if(visit[v])
                                        {
                                            ele = v;
                                            break;
                                        }
                                    }
                                }
                            }
                            if(st.back()==u)
                            {
                                break;
                            }
                            assert(!st.empty());
                        }
                        int v = ele;
                        while(!st.empty() && st.back() != ele)
                        {
                            int u = st.back();
                            cross[u][v]--;
                            num++;
                            st.pop_back();
                            v = u;
                        }
                        assert(st.back() == ele);
                        cross[ele][v]--;
                    }
                }
            }
        }
    cout<<num<<endl;
    }
    return 0;
}