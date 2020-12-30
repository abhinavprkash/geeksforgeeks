
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
#define pb push_back
#define loop(i,n) for(int i = 0; i < n; ++i)
#define loop_1(i,n) for(int i = 1; i <= n; ++i)

using namespace std;

void positive_push() {
	int pos = 0;

}

void solve() {
	ll n, k;
	cin >> n >> k;
	vll arr;
	int position = 0;
	loop_1(i, n)
	{
		if (i % 2 && position < k)
		{
			arr.pb(i);
			position++;
		} else {
			arr.pb(-i);
		}
	}
	if (position < k) {
		for (int i = n - 1; i >= 0 && position < k; i--) {
			if (arr[i] < 0) {
				arr[i] = i + 1;
				position++;
			}
		}
	}
	loop(i,n){
            cout << arr[i] << (i == n - 1 ? "\n" : " ");
        }
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
