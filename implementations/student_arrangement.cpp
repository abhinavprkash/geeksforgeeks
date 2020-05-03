
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
		int n,m;
		cin>>n>>m;
		int k;
		cin>>k;
		int arr[n+1];
		int arr1[m];
		for (int i = 0; i <=m; ++i)
		{
			arr1[i] =0;
		}
		for (int i = 1; i <= n; ++i)
		{
			cin>>arr[i];
			if (arr1[arr[i]]<k)
				arr1[arr[i]]++;
		}

		ll total =0;
		for (int i = 1; i <=m; ++i)
			total+=arr1[i];
		cout<<n-total <<endl;
		return 0;
	}
