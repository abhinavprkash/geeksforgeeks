
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
			int n, ele;
			int min =1, max =1 ;
			int prev =0;
			cin>>n;
			vi v;
			vi result;
			vi finalResult;
			for (int i = 0; i < n; ++i)
			{
				cin>>ele;
				v.push_back(ele);
			}
			for (int i = 0; i < n; ++i)
			{
				if (i==0)
				{
					result.push_back(1);
					prev= 1;
				}else	{
					if (v[i]-v[i-1]<=2)
					{
						result.push_back(prev+1);
						prev = prev+1;
					}
					else{
						result.push_back(1);
						finalResult.push_back(prev);
						prev =1;
					}
				}
			}
			finalResult.push_back(prev);
			cout<<*min_element(finalResult.begin(), finalResult.end())<<" "<<*max_element(finalResult.begin(), finalResult.end())<<endl;

		}
		return 0;
	}
