
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
const int maxN = 207;
int dp[maxN];
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		int q, d;
		cin>>q>>d;
		if(!d)
			d+=10;
		int mx = d*10;
		for (int i = 0; 10*i+d <= mx; ++i)
		{
			for (int j = 0; 10*i+d+j <= mx; ++j)
			{
				dp[10*i+d+j]|= dp[j];
			}
		}
		while(q--) {
		    /* code */
		    int u;
		    cin>>u;
		    if(u >= mx|| dp[u])
		    	cout<<"YES\n";
		    else
		    	cout<<"NO\n";
		}	
	}
	return 0;
}
