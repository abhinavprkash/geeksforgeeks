
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
		int b,n , m, keyboard[10001], mouse[10001],a, result =-1;
		cin>>b>>n>>m;
		for (int i = 0; i < n; ++i)
		{
			cin>>keyboard[i];
		}
		for (int i = 0; i < m; ++i)
		{
			cin>>mouse[i];
		}
		for (int i = 0; i < n; ++i)
		{
			for(int j = 0; j < m; ++j) {
				if (keyboard[i]+mouse[j]<=b)
				{
					result = max(result,keyboard[i]+mouse[j]);
				}
			}
		}
		cout<<result<<endl;
		return 0;
	}
