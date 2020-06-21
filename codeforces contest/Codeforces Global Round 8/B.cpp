//B. Codeforces Subsequences

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
	ll k;
	cin>>k;
	string s ="codeforces";

	ll val[11];
	for (ll i = 0; i < 11; ++i)
	{
		val[i] =1;
	}

	ll prod = 1;
	while(prod< k) {
	    for (ll i = 0; i < 10; ++i)
	    {
	    	val[i]++;
	    	prod = prod/(val[i]-1);
	    	prod = prod*val[i];

	    	if(prod>=k){
	    		break;
	    	}
	    }
	}
	for (ll i = 0; i < 10; ++i)
	{
		while(val[i] > 0){
			cout<<s[i];
			val[i]--;
		}
	}
	cout<<"\n";
	return 0;
}
