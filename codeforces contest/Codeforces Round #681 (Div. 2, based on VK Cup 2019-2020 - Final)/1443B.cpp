
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


using namespace std;


void solve(){
	int a,b;
	cin>>a>>b;
	string s;
	cin>>s;
	int n = s.length(), loacation = -1;
    vi next_pos(n);
    for (int i = n - 1; i >= 0; --i) {
        next_pos[i] = loacation;
        if (s[i] == '1') loacation = i;
    }

    int cost = 0;
    for (int i = 0; i < n; ++i) {
        int k = i;
        while (k < n && s[k] == '1') ++k;
        if (k == i) continue;
        if (k < n && next_pos[k] > 0 && (next_pos[k] - k) * b < a) {
            cost += (next_pos[k] - k) * b;
        } else {
            cost += a;
        }
        i = k;
    }
    cout << cost << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		solve();
	}
	return 0;
}
