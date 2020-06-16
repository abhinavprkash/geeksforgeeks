
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
		cin.tie(NULL);
		int n;
		cin>>n;
		vector<int> squares(n);
		for (int i1 = 0; i1 < n; i1++)
		{
			cin>>squares[i1];
		}
		int d, m;
		cin>>d>>m;
		int ct=0; int sum=0;
		int max = n-m;
		int j ;
		for (int i = 0; i <= max; ++i)
		{
			sum = 0;
			j=i;
			for (int k = 0; k <m; ++k)
		{
			sum+=squares[j];
			++j;
		}
		if (sum == d)
		{
			ct++;
		}
	}
		cout<<ct<<endl;
		return 0;
	}
