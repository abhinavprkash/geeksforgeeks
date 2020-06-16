
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
	#define m 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	
	ll expo(ll a,ll b){
    if(b==0){
        return 1;
    }
 
    if(b%2==0){
        return ((expo(a,b/2)%m) * (expo(a,b/2)%m))%m;
    }else{
        return (a%m * expo(a,b-1)%m)%m;
    }
}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			ll n,a;
        cin>>n>>a;
 
			ll sum = 0;
        //ll p = 1;
        ll base = (a%m)%m;
        for(ll i=1;i<=n;i++){   
            ll res = expo(base,2*i-1)%m; //pi -- p1
            sum = (sum%m +  res%m)%m;
            base = (base%m * res%m)%m;
        }
 
        cout<<sum%m<<"\n";
		}
		return 0;
	}
