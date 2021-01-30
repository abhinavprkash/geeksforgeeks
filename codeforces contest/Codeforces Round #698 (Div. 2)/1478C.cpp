
 
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
const ll maxn = 200007;
int main()
{
	std::ios::sync_with_stdio(false);
	ll T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		ll n, a[maxn], b[maxn], d[maxn];
		cin>>n;
		for (ll i = 0; i < 2*n; ++i)
		{
			cin>>a[i];
		}
		sort(a, a+2*n, greater<ll>());
		for (ll i = 0; i < n; ++i)
		{
			if(a[i*2]!=a[i*2+1]){
				cout<<"NO"<<endl;
				goto cont;
			}
			b[i] = a[i*2];
		}
		for (ll i = 1; i < n; ++i)
		{
			if (b[i-1]==b[i]||(b[i-1]-b[i])%(2*(n-i))){
                cout<<"NO\n";
                goto cont;
            }
            d[i]=(b[i-1]-b[i])/2/(n-i);
		}
		for (ll i = 1; i < n; ++i)
		{
			b[n-1]-=2*i*d[i];
        }
        if (b[n-1]<=0||b[n-1]%(2*n)) cout<<"NO\n";
        else cout<<"YES\n";
 
        cont:;
	}
	return 0;
}