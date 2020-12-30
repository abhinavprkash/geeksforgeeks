
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
#define pll pair<ll, ll>
#define mod 998244353
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;


void solve();


ll funct(ll p, ll q);
void solve() {
    int z, x, k, p = 0;
    z = 1;
    x = 1;
    k = 1;
    p = 1;
}

int main() {
    ll n, ans = 0;
    ll m , p;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        m = (2 * i) - 1;
        p = funct(2, m);
        ans  = ((ans % mod) + (p % mod)) % mod;
    }
    cout << ans << endl;
    return 0;
}



ll funct(ll p, ll q) {
    ll exponent;
    exponent = mod - 2;
    while (exponent) {
        if (exponent & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        exponent >>= 1;
    }
    return p;
}