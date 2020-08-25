
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
#define vc vector<char>
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

void solve();

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

void solve(){
    string s;
    cin >> s;
    int x = 0;
    cin >> x;
    vector<char> w(s.length(), '-');
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            if (i - x >= 0 && i - x < s.length()) {
                if (w[i - x] == '0') {
                    cout << -1 << '\n';
                    return;
                }
                if (w[i - x] == '-')
                    w[i - x] = '1';
            }
            if (i + x >= 0 && i + x < s.length()) {
                if (w[i + x] == '0') {
                    cout << -1 << '\n';
                    return;
                }
                if (w[i + x] == '-')
                    w[i + x] = '1';
            }
        } else {
            if (i - x >= 0 && i - x < s.length()) {
                if (w[i - x] == '1') {
                    cout << -1 << '\n';
                    return;
                }
                if (w[i - x] == '-')
                    w[i - x] = '0';
            }
            if (i + x >= 0 && i + x < s.length()) {
                if (w[i + x] == '1') {
                    cout << -1 << '\n';
                    return;
                }
                if (w[i + x] == '-')
                    w[i + x] = '0';
            }
        }
    }
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (w[i] == '-') {
            cout << -1 << '\n';
            return;
        }
        res += w[i];
    }
    cout << res << '\n';
}