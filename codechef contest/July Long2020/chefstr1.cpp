/*Chef and Strings 
submitted by Abhinav Prakash 
username abhinav_526 */


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
		ll T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			ll n;
			cin>>n;
			vi arr(n);
			for (ll i = 0; i < n; ++i)
			{
				cin>>arr[i];
			}
			ll count = 0;
			for (int i = 0; i < n-1; ++i)
			{
				if (arr[i] != arr[i+1])
				{
					count += (fabs(arr[i]-arr[i+1])-1);
				}
			}
			cout<<count<<endl;
		}
		return 0;
	}
