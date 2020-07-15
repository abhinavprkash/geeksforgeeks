
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

ll pow(ll base, ll exponent, ll modulus = mod){
	ll result  = 1;
	while(exponent>0) {
	    if (exponent%2 == 1)
	    {
	    	result = (result* base)%modulus;
	    }
	    exponent = exponent>>1;
	    base = (base*base)%modulus;
	}
	return result;
}

ll func(ll x, ll n, ll len){
	ll r = pow(2, len, mod);
	ll temp = (pow(r, n, mod)-1)* pow(r-1,mod-2, mod)%mod;
	temp = temp*x%mod;
	return temp;
}

pll gcd(int a, int b){
	if (a%b ==0)
	{
		return {pow(2, a-1,mod), pow(2, b-1, mod)};
	}
	else
	{
		pll x = gcd(b, a%b);
		return{(func(x.f, a/b,b)*pow(2, a%b, mod)+x.s)%mod, x.f};
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int x, y;
		cin>>x>>y;
		cout<<gcd(x, y).f<<endl;
		
	}
	return 0;
}
