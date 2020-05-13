
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
#define pb push_back


using namespace std;

void solve(int tc) {
    ll x, y, l, r;
    cin >> x >> y >> l >> r;
    vll zs;
    bool eq = true;
    ll curr = 0;
    for (int i = 62; i >= 0; --i)
    {
        ll p = (1LL << i);
        if ((l & p) == (r & p) && eq)
        {
            curr += r & p;
            continue;
        }
        if (eq) {
            eq = !eq;
        }
        if (r & p) {
            zs.pb(curr + p - 1);
        }
        curr +=  r & p;
    }
    zs.pb(r);
    zs.pb(l);
    sort(all(zs));
    ll ans =  zs[0];
    for (ll z : zs)
    {
        if ((x & z) * (y & z) > (x & ans) * (y & ans))
            ans = z;
    }
    for (ll i = 62; i >= 0; --i) {
        ll p = (1LL << i);
        if ((ans & p) == 0)
            continue;
        if ((x & p) == 0 && (y & p) == 0 && ans - p >= l)
            ans -= p;
    }
    cout << ans << endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        solve(tc);
    }
    return 0;
}
