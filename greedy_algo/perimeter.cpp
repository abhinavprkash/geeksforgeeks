
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

	void go(int *arr, int n){
		sort(arr, arr+n, greater<int>());

		for (int i = 0; i < n-2; ++i)
		{
			int s1,s2,s3;
			s1 = arr[i];
			s2 = arr[i+1];
			s3 = arr[i+2];

			if (s2+s3>s1 && s1+s2 >s3 && s1+s3>s2)
			{
				cout<<s3<<" "<<s2<<" "<<s1<<'\n';
				return ;
			}
		}
		cout<<"-1"<<'\n';
		return ;
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int n;
		cin>>n;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		go(arr,n);
		delete [] arr;
		return 0;
	}
