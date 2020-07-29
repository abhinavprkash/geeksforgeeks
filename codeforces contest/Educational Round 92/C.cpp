
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

using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<int> a;
    map<int, int> mp;
    for (auto k : s) {
        a.push_back((int)k - (int)'0');
        mp[(int)k - (int)'0']++;
    }

    int max_count = 0;
    for (int i = 0; i < 10; ++i)
      {
        for (int j = 0; j < 10; ++j)
          {
            int count = 0;
            bool f = false;
            bool second = true;
            for (int k = 0; k < s.size(); ++k) 
                          {
                if (a[k] == i && !first) {
                    f = true;
                    second = false;
                }
                else if (a[k] == j && !second) {
                    second = true;
                    f = false;
                    count++;
                }
            }
            max_count = max(max_count, count);
        }
    }
    int len = 2 * max_count;
    for (auto k : mp) {
        len = max(len, k.second);
    }
    cout << s.size() - len << endl;
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
