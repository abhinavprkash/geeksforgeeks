//number of triangles


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
	std::ios::sync_with_stdio(false);
	ll t=1LL;
cin>>t;
 
 
while(t--)
{
  ll n,a,b;
  cin>>n>>a>>b;
  n-=2;
  if(n==3){cout<<1<<"\n";continue;}
  ll ans=n*(n-4);
  ans=max(ans,0LL);
  ans+=n;
  ans-=(n-4);
  ll tmp=min(n+2-abs(a-b),abs(a-b));
  if(tmp==2)ans-=(n-3);
  else if(tmp>2)ans-=(n-4);
  // else ans-=(4*(n-4)+6);
  cout<<ans<<"\n";
}
}