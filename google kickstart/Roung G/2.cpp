
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

int main()
{
    auto tt = 0;
    cin>>tt;
    for(auto itr = 1;itr<=tt;itr++)
    {
        auto n = 0;
        cin>>n;
        map<long long int,long long int>mp;
       auto t =  vector<vector<long long int >> (n, vector<long long int>(n,0));
        for(auto i = 0;i<n;i++)
        {
                for(auto j = 0;j<n;j++)
            {
                cin>>t[i][j];
                mp[i-j]+=t[i][j];
            }
        }
        auto maxi = 0;
        
        for(auto it:mp)
            if(it.second>maxi)maxi = it.second;
            
        cout<<"Case #"<<itr<<": "<<maxi<<endl;
        maxi =0;
        mp.clear();
        t.clear();
        
    }
    
}


