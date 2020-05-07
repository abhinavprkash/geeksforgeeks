
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

		ll po[31] = {0};
		po[0] =1;
		for (int i = 1; i <= 30; ++i)
		{
			po[i] = 2*po[i-1];
		}
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			ll n;
			cin>>n;
			ll sum1 = po[n];
			for (int i = 1; i < n/2; ++i)
			{
				sum1+= po[i];
			}
			ll sum2 = 0ll;
			for (int i = n/2; i < n; ++i)
			{
				sum2 += po[i];
			}
			cout<<abs(sum2 -sum1)<<endl;
		}
		return 0;
	}
