
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

ll power(ll base, ll exp) { 
    if (exp == 0) 
        return 1; 
  
    if (exp == 1) 
        return base; 
  
    ll t = power(base, exp / 2); 
    t = (t * t); 
  
    if (exp % 2 == 0) 
        return t; 
    else
        return (base * t); 
} 

ll MOD = power(2,32);

ll mod(ll n) { 
    return ( n % (MOD) ); 
}   


int main()
{
	std::ios::sync_with_stdio(false);
	ll n,q;
    cin >> n >> q;
    ll weight[n];
    for (ll i=0;i<n;i++) {
        cin >> weight[i];
    }
    ll parent[n+1];
    parent[0] = 0;
    parent[1] = 0;
    for (ll i=0;i<n-1;i++) {
        ll u,v;
        cin >> u >> v;
        parent[v] = u;
    }

    while (q--) {
        ll u,v;
        cin >> u >> v;
        ll sum = 0;
        while (u && v) {
            sum = mod(mod(sum) + mod( mod(weight[u-1]) * mod(weight[v-1]) ));
            u = parent[u];
            v = parent[v];
        }

        cout << sum << "\n";
    }
	return 0;
}
