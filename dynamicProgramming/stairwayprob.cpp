
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

	ll dp[10000001];
	ll findMinStep(int *arr, int n, int step){
		if (step == n-1)
		{
			return 1;
		}
		if (step>=n)
		{
			return 0;
		}
		if (dp[step]!=-1)
		{
			return dp[step];
		}
		ll ans =0;
		for (int i = 1; i <= arr[step]; ++i)
		{
			ans	+= findMinStep(arr, n, (step+i)%mod)%mod;
			ans = ans%mod;
		}
		return dp[step] = ans;
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int n;
		cin>>n;
		memset(dp, -1, sizeof(dp));
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		cout<<findMinStep(arr,n,0)<<endl;
		return 0;
	}
