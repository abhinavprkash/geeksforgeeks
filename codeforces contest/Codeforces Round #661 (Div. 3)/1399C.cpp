
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

	void solve(){
		int n;
		cin>>n;
		vi arr(n+1);
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin>>x;
			++arr[x];
		}
		int ans =0;
		for (int s = 2; s <= 2*n; ++s)
		{
			int current =0;
			for (int i = 0; i < (s+1)/2; ++i)
			{
				if (s-i> n)
					continue;
				current += min(arr[i], arr[s-i]);
			}
			if (s%2 == 0) current += arr[s/2]/2;
			ans = max(current, ans);
		}
		cout<<ans<<endl;
		
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			solve();
		}
		return 0;
	}
