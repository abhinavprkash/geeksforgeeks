
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
		ll i,j,k;
		ll n, count =0;
		ll seg =0;
		ll l,r;
		cin>>n;
		ll a[n], s[n];
		for (i = 0; i < n; i++)
		{
			cin>>a[i];
			s[i] = a[i];
		}
		sort(s, s+n);
		for (i = 0; i < n; i++)
		{
			if (s[i] == a[i])
				count++;
		}
		if (count ==n)
		{
			cout<<"yes \n1 1";
			return 0;
		}
		for (i = 0; i < n-1, seg<1;)
		{
			if (a[i]<a[i+1]){
				i++;
			}
			else{
				l=i;
				r =i;
				while(a[i]>a[i+1] && i<n-1) {
				   	i++;
				   	r++;
				}
				sort(a+l, a+r+1);
				seg++;
			}
			}
			for(i=0;i<n;i++)
        {
            if(s[i]!=a[i])
            {
                cout<<"no";
                return 0;
            }
        }
		cout<<"yes \n"<<l+1<<" "<<r+1;
		return 0;
	}
