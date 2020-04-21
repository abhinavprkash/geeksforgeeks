
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
		while(T--)
		{
			int n, x=0, y=0, flag=0;
			cin>>n;
			string s;
			cin>>s;
			if (s[0]=='D'|| s[0]=='U')
				flag=1;
			else if(s[0]=='L'||s[0]=='R')
				flag =0;
			for (int i = 0; i < n; ++i)
			{
				if (s[i]=='L'&&flag ==0)
				{
					flag =1;
					x--;
				}
				else if (s[i]=='R' && flag ==0)
				{
					flag =1;
					x++;
				}
				else if (s[i]=='U' && flag ==1)
				{
					flag =0;
					y++;
				}
				else if (s[i]=='D' && flag ==1)
				{
					flag =0;
					y--;
				}
			}
			cout<<x<<" "<<y<<endl;
		}
		return 0;
	}
