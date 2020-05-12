
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
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			ll n, s;
			cin>>n>>s;
			vll v;
			for (int i = 0; i < n; ++i)
			{
				ll a;
				cin>>a;
				v.push_back(a);
			}
			sort(v.begin(), v.end());
			ll lower, upper;
			lower=lower_bound(v.begin(),v.end(),s)-v.begin();
			upper=upper_bound(v.begin(),v.end(),s)-v.begin();
			cout<<n-upper-lower<<endl;
		}
		return 0;
	}
