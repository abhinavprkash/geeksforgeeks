
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


void solve() {
    int n, k;
    string a, b;
    cin >> n >> k >> a >> b;
    array<int, 26> ar = {0}, br = {0};
    for (auto &i:a) ++ar[i - 'a'];
    for (auto &i:b) ++br[i - 'a'];
    for (int i = 0; i < 25; ++i) {
        if (ar[i] == br[i]) continue;
        if (br[i] > ar[i] || (br[i] - ar[i]) % k != 0) {
            cout << "No\n";
            return;
        }
        ar[i + 1] += ar[i] - br[i];
    }
    if (ar[25] != br[25]) cout << "No\n";
    else cout << "Yes\n";
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}