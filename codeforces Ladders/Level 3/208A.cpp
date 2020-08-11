
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
		string s;
		int flag =1;
		cin>>s;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
			{
				i+=2;
				if (!flag)
				{
					cout<<" ";
				}continue;
			}else{
				flag = 0;
				cout<<s[i];
			}
		}
		return 0;
	}
