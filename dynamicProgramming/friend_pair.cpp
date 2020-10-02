
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


long long pair_friend(int n)
{
    long long dp[n+1];

    // Filling dp[] in bottom-up manner using
    // recursive formula explained above.
    for (int i=0; i<=n; i++)
    {
        if (i <= 2)
        dp[i] = i;
        else
        dp[i] = dp[i-1] + (i-1) * dp[i-2];
    }

    return dp[n];
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n;
		cin >> n;
		cout << pair_friend(n) << endl;
	}
	return 0;
}
