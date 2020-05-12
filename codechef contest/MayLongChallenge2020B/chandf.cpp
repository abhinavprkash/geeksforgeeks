
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
			ll x, y, z,l, r;
			cin>>x>>y>>l>>r;
			z = x|y;
			int x1 = min(x,y);
			if (x1 == 0)
				cout<<0<<endl;
			else if(z<r)
				cout<<z<<endl;
			else{
				x1 = max(x,r);
				int x11 = log(x1)+1;
				cout<<x11;
				ll p = powl(2,x1)-1;
				cout<<p;
				if (((p|x && (p|y))|| (r|l &&(r|y))))
					cout<<0<<endl;
			}
		}
		return 0;
	}
