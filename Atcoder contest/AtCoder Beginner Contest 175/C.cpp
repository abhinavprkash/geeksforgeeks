
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll int64_t
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

ll X,K,D;


void solve()
{
	cin >> X >> K >> D;
    if (X == 0){
        if (K % 2 == 0) cout << 0 << endl;
        else cout << D << endl;
        return ;
    } else {
        if (X < 0) X = -X;
        ll pl = X % D, mi = D - pl;
        ll to_pl = X / D;
        if (to_pl > K){
            cout << X - K * D << endl;
        } else {
            if ((K - to_pl) % 2 == 0) cout << pl << endl;
            else cout << mi << endl;
        }
    }
}

int main()
{
	std::ios::sync_with_stdio(false);
	solve();
	return 0;
}
