//D - Replacing

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
		ll n;
		cin>>n;
		ll sum =0;
		map<ll, ll> m;
		for (int i = 0; i < n; ++i)
		{
			ll x; cin>>x;
			m[x]++;
			sum += x;
		}
		int q; cin>>q;
		for (int i = 0; i < q; ++i)
		{
			ll a,b;
			cin>>a>>b;
			ll rem = 0;
			if(m[a]) rem= m[a];
			m[a]= 0;
			m[b]+=rem;
			sum -= rem*a;
			sum+= rem*b;
			cout<<sum<<endl; 
		}
		return 0;
	}
