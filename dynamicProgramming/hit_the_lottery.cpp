
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
		int n;
		cin>>n;
		int m =0;
		if (n/100)
			m+= (n/100), n-=(n/100)*100;
		if (n/20)
			m+= (n/20), n-=(n/20)*20;
		if (n/10)
			m+= (n/10), n-=(n/10)*10;
		if (n/5)
			m+= (n/5), n-=(n/5)*5;
		m+=n;

		cout<<m;
		return 0;
	}
