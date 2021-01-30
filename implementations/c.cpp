
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
void solve(){
	int n, m, k;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for(int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }
    cin >> k;
    vector<int> c(k), d(k);
    for(int i = 0; i < k; i++) {
        cin >> c[i] >> d[i];
    }
    int res = 0;
    for(int i = 0; i < (1 << k); i++) {
        vector<bool> filled(n, false);
        for(int j = 0; j < k; j++) {
            if(i & (1 << j)) {
                filled[c[j] - 1] = true;
            } else {
                filled[d[j] - 1] = true;
            }
        }
        int temp = 0;
        for(int j = 0; j < m; j++) {
            if(filled[a[j] - 1] && filled[b[j] - 1]) {
                temp++;
            }
        }
        res = max(temp, res);
    }
    cout<< res<<endl;
}
int main()
{
	std::ios::sync_with_stdio(false);
	solve();
	return 0;
}
