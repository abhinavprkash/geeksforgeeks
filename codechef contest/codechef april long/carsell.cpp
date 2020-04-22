
	#include <bits/stdc++.h>
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
		std::ios::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			ll n;
			cin>>n;
			ll * arr = new ll[n];
			for (ll i = 0; i < n; ++i)
				cin>>arr[i];
			sort(arr, arr+n, greater<ll>());
			ll ans =0;
			for (ll i = 0; i < n; ++i)
			{
				ans = (ans%mod + max(arr[i]-i, 0ll)%mod)%mod;
			}
			cout<<ans<<endl;
		}
		return 0;
	}
