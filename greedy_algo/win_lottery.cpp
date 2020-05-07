
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

	void findsmallest(int m, int s){
		if (s==0)
		{
			(m==1)? cout<<0:cout<<"Not Possible";
			return;
		}
		if (s >9*m)
		{
			cout<<"Not Possible";
			return;
		}
		int res[m];
		s -=1;
		for (int i = m-1; i >0; i--)
		{
			if (s>9)
			{
				res[i] = 9;
				s-=9;
			}
			else{
				res[i] = s;
				s= 0;
			}
		}
		res[0] = s+1;
		for (int i = 0; i < m; ++i)
			cout<<res[i];
	} 

	int main()
	{
		std::ios::sync_with_stdio(false);
		int s,d;
		cin>>s>>d;
		findsmallest(d,s);
		return 0;
	}
