
#include <bits/stdc++.h>

#define int long long 


using namespace std;
const int maxn = 200007;

int n, k;
int arr[maxn];


signed main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int g = 0;
		for (int i = 1; i < n; ++i)
		{
			g = __gcd(g, arr[i] - arr[0]);
		}
		if ((k - arr[0]) % g)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
