/*Doctor Chef Problem Code: DRCHEF
submitted by Abhinav Prakash
username abhinav_526 */
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

int main()
{
	std::ios::sync_with_stdio(false);
	ll T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		ll n, x;
		cin >> n >> x;
		ll arr[n];
		ll ans = 0;
		for (ll i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		sort(arr, arr+n);
		ll i_1 = lower_bound(arr, arr+n, x) - arr;

		for (ll i = i_1; i < n; ++i)
		{
			/*while (x < a[i]) {
				x = min(2 * x, 2 * a[i]);
				ans++;
			}
			if (!check)
						x = 2 * a[i];*/
			if (x < arr[i])
			{
				while (x < arr[i]) {
					x = 2 * x;
					ans++;
				}
				ans++;
			}
			else
				ans++;
			x = 2 * arr[i];
		}

		int check = i_1 + ans;
		if (i_1 != 0) {
			ans = 0;
			i_1--;
			for (int i = i_1; i < n; ++i)
			{
				if (x < arr[i])
				{
					while (x < arr[i]) {
						x = 2 * x;
						ans++;
					}
					ans++;
				}
				else
					ans++;
					x = 2 * arr[i];
			}
			if(ans+ i_1 < check)
				cout<<ans + i_1<<endl;
			else
				cout<<check<<endl;

		}
		else
			cout << check<< endl;
	}
	return 0;
}


