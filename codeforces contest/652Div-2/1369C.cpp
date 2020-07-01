//C. RationalLee


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

ll ar[200001], br[200001];

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n,k;
		cin>>n>>k;
		for (int i = 1; i <= n; ++i)
			cin>>ar[i];
		for (int i = 1; i <= k; ++i)
			cin>>br[i];

		sort(ar+1, ar+n+1);
		sort(br+1, br+k+1);

		ll res =0;
		int i = 1;
		int j = n;
		int p = 1;

		while(p<=n && br[p] == 1)
			res += 2*ar[j] , j--, p++;

		for (int q = k; q >= p; --q)
		{
			res += ar[j] +ar[i];
			j--, i++, br[q] -=2;
			while(br[q] > 0) 
			    i++, br[q]--;
			

		}
		cout<<res<<endl;
	}
	return 0;
}
