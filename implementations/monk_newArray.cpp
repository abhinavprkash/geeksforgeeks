
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
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++) cin>>arr[i][j];
	   	sort(arr[i],arr[i]+m);
		
	}
	int ans =INT_MAX;
	for(int i=0;i<n-1;i++)
	{
	
		for(int j=0;j<m;j++) 
		{
			int ans1=INT_MAX,ans2=INT_MAX;
		    int a = lower_bound(arr[i+1],arr[i+1]+m,arr[i][j])- arr[i+1]; //cout<<a<<endl;
			if(a<m) ans1 = abs(arr[i+1][a]-arr[i][j]);
			if(a>0) ans2 = abs(arr[i+1][a-1]-arr[i][j]);
				ans = min(ans,min(ans1,ans2));
		}
	
	}
	cout<<ans<<endl;
	
}