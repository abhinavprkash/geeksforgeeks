
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
	#define forn(i, n) for(int i=0;i<int(n);i++)
	#define Forn(i, n) for(int i=1;i<=int(n);i++)
	
	using namespace std;
	int a[200010];
	int v[400010];
	int n, k;
	void init(){
		Forn(i,k*2) v[i] =0;
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			cin>>n>>k;
			init();
			Forn(i,n) cin>>a[i];
			Forn(i,n/2){
				v[1]+=2;
				v[k*2+1] -=2;
				int st = min(a[i], a[n+1-i])+1;
				int en = max(a[i], a[n+1-i])+k;
				v[st] -=1;
				v[en+1] +=1;
				int sum = a[i]+a[n+1-i];
				v[sum] -= 1;
				v[sum+1] +=1;
			}
			Forn(i, k*2) v[i] += v[i-1];
			cout<<*min_element(v+1, v+k*2+1)<<endl;
		}
		return 0;
	}
