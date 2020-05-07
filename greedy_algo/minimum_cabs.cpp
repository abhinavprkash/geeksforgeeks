
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
ios_base::sync_with_stdio(false);
cout.tie(0);
cin.tie(NULL);
int n,ct=0; cin>>n;
int a[1440],mx=0;
memset(a,0,sizeof(a));
while(n--)
{
int h1,h2,m1,m2,st,end;
cin>>h1>>m1>>h2>>m2;
st=h1*60+m1; end=h2*60+m2;
for(int i=st;i<=end;i++)
a[i]+=1;
}
for(int i=0;i<1440;i++)
{
mx=max(mx,a[i]);
}
cout<<mx;
}