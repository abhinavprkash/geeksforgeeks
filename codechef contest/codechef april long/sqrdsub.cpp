
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
		std::ios::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
		int T;
		cin>>T;
		while(T--)
		{
			int n; cin>>n;
			int * arr = new int[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>arr[i];

				if (arr[i]&1)
					arr[i]=0;

				else if (!(arr[i]%4))		
					arr[i]=2;

				else	
					arr[i]=1;
			}
			int ans =0; int c=0;

			for (int i = 0; i < n; ++i)
				if (!arr[i])
					c++;
				else
					ans += (c * (c+1))/2 , c=0;
				ans+= (c*(c+1))/2;

				int rval = -1, curr_sum=0;
				for (int ival = 0; ival < n; ++ival)
				{
					while(rval+1<n && curr_sum <2)
						curr_sum +=  arr[++rval];

					if (curr_sum >=2)
						ans+=(n-rval);
					
					curr_sum -= arr[ival];
				}
				cout<<ans<<endl;
		}
		return 0;
	}
