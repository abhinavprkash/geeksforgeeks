
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
int f(ll n){
	ll res = 0;
    for(int i = 1ll;; i++) {
        ll temp = 2ll * n - pow(i, 2ll) + i;
        ll div = 2ll * i;
        if(temp < 0) {
            break;
        }
        if(temp % div != 0) {
            continue;
        }
        ll a = temp / div;
        if(a > 0) {
            res += 2;
        } else {
            break;
        }
    }
    return res;
}
void solve(){
	ll h;
	cin>>h;
	cout<<f(h)<<endl;
}
int main()
{
	std::ios::sync_with_stdio(false);
	solve();
	return 0;
}
