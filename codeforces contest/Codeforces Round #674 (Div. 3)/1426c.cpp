
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

const long double EPS = 1e-9;


ll solve(ll x){
	

	ll z = sqrtl(x);
	ll ans = 1e18;
	for (int i = -5; i <= 5; ++i)
	{
		ll z2 = z-i;
		if (z2 > x || z2 <1)
		{
			continue;
		}
		ans = min(ans, z2-2+(x+z2 -1)/z2);
	}
	return ans;

}


int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); mustart be there when using getline(cin, s)
	while (T--)
	{
		ll x;
		cin>>x;

		cout<<solve(x)<<endl;
	}
	return 0;
}
