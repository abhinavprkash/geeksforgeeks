#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());


int32_t main()
{
	FIO;
	int f[100001];

	for (int i = 1; i <= 100000; ++i)
		f[i] = f[i - 1] + 3 * i - 1;

	w(t)
	{
		int n; cin >> n;

		int ans = 0;

		while (n > 1)
		{
			//f[i]<=n

			//smallest i s.t. f[i]>n, i--;

			int i = upper_bound(f, f + 100000, n) - f;
			i--;

			n -= f[i];
			ans++;
		}

		cout << ans << '\n';
	}
	return 0;
}