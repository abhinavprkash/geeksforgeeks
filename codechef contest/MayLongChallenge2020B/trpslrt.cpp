	#include<bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define li long int
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


	void swaps(li *a, li i1, li i2, li i3)
	{
		li temp = a[i3];
		a[i3] = a[i2];
		a[i2] = a[i1];
		a[i1] = temp;
	}
	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);cout.tie(NULL);

		int t;
		cin>>t;
		while(t--)
		{
			li n,k;
			cin>>n>>k;
			li a[n],b[n];
			for(li i=0;i<n;i++)
			{
				cin>>a[i];
				b[i] = a[i];	
			}
			sort(b,b+n);

			unordered_map<li,li>idx;
			for(li i=0; i<n;i++)
				idx[b[i]] = i;

			li ans = 0;
			vector<pair<li,pair<li,li>>> steps;
			li prevf=-1,prevs=-1,i1,i2,i3;
			for(li i=0; i<n; )
			{
				if(a[i]==b[i] || prevs==i) 
				{
					i++;
					continue;
				}
				i1 = i;
				i2 = idx[a[i1]];
				i3 = idx[a[i2]];
				if(i3==i1 && prevf==-1)
				{
					prevf = i1;
					prevs = i2;
					i++;
					continue;
				}
				else if(i3==i1)
				{
					i1 = prevf;
					i2 = prevs;
					i3 = i;
					prevf=-1;
					prevs=-1;
				}

				swaps(a,i1,i2,i3);
				ans++;
				steps.push_back({i1+1,{i2+1,i3+1}});
				if(a[i1]==b[i1])
					i++;

				if(ans>k)
				{
					ans = -1;
					break;
				}
			}

			if(prevf!=-1) ans = -1;

			if(ans<=k && ans!=-1)
			{
				cout<<ans<<"\n";
				for(auto &x: steps)
					cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<"\n";
			}
			else
				cout<<"-1\n";
		}

		return 0;
	}


