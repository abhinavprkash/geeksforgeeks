
	#include <bits/stdc++.h>

	#define ll long long int

	
	using namespace std;

	int modularexpo(ll n, ll p, ll m){
		if(p==0)
			return 1;
		if(p&1)
			return (n%m*modularexpo((n*n)%m,p/2,m)%m)%m;
		return modularexpo((n*n)%m, p/2, m)%m;
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			ll a, b;
			cin>>a>>b;
			cout<<modularexpo(a,b,10)<<endl;

		}
		return 0;
	}
