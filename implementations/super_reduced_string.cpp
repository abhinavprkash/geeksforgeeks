
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
		cin>>s;
		bool isZero(false);

		for (int i = 0; i < (s.length()-1); ++i)
			if (s[i] == s[i+1])
			{
				s.erase(s.begin()+i);
				s.erase(s.begin()+i);


				if (s.length()==0)
				{
					isZero =true;
					break;
				}
				i =-1;
			}
			if (isZero)
				cout<<"Empty String";
			else
				cout<<s;
		return 0;
	}
