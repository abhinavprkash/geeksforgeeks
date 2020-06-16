
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>

using namespace std;

#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)

#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;

void solve(ll test_case)
{
    int n, p;
    cin >> n >> p;
    vvi op, sum;
    FOR(i, 0, n, 1)
    {
        vi row(n);
        op.push_back(row);
        sum.push_back(row);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "1 1 1 " << (i + 1) << " " << (j + 1) << "\n";
            int x;
            cin >> x;
            sum[i][j] = x;
            if (i == 0 && j == 0)
                op[i][j] = x;
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j > 0)
            {
                op[i][j] = sum[i][j] - sum[i][j - 1];
            }
            else if (j == 0 && i > 0)
            {
                op[i][j] = sum[i][j] - sum[i - 1][j];
            }
            else if (i > 0 && j > 0)
            {
                op[i][j] = sum[i][j] - sum[i - 1][j] - sum[i][j - 1] + sum[i - 1][j - 1];
            }
        }
    }

    // Solution Found
    cout << "2\n";
    for (int i = 0; i < n; i++)
    {
        vi row = op[i];
        for (int j = 0; j < n; j++)
        {
            cout << op[i][j] << " ";
        }
        cout << "\n";
    }
    int x;
    cin >> x;
    if (x == -1)
        return;
}

int main()
{
// #ifndef ONLINE_JUDGE
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
// #endif
    ll t, t1 = 0;
    cin >> t;
    while (t1 < t)
    {
        solve(t1 + 1);
        t1++;
    }
}