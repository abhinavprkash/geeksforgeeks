
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
			int number_string, number_queries;
			cin>>number_string>>number_queries;
			string str;
			cin>>str;
			vi count(26,0);
			for (int i = 0; i < number_string; ++i)
			{
				count[str[i]-'a']++;
			}
			for (int i = 0; i < number_queries; ++i)
			{
				int isolated, number_queue =0;
				cin>>isolated;
				for (int j = 0; j < 26; ++j)
				{
					if (isolated<count[j]) number_queue += count[j] - isolated;
				}
				cout<<number_queue<<endl;
			}
		}
		return 0;
	}
