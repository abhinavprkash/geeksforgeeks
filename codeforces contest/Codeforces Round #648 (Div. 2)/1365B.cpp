#include<bits/stdc++.h>
using namespace std;
 
#pragma GCC push_options
#pragma GCC optimize ("unroll-loops")
 
 
#define print(a)        for (auto x : a) cout << x << " "; cout << endl
#define print_upto(a,n)        for(int i=0;i<n;i++)    cout<<a[i]<<" "; cout<<endl
#define take(x,n)           for(int i=0;i<n;i++)  cin>>x[i];
 
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"
 
#define ll long long
#define pie_value 3.14159265358979323846
 
int main() {
 
	// Use ctrl+shift+b ( second option )
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt" , "w" , stderr);
#endif
 
	ll t;
	cin >> t;
 
	while (t--) {
 
		ll n;
		cin >> n;
 
		// ll a[n + 1];
		// for(ll i=1;i<=n;i++){
		// 	cin>>a[i];
		// }
 
		vector<pair<ll, ll>>v(n + 1);
		for (ll i = 1; i <= n; i++) {
			ll val;
			cin >> val;
			v[i].first = val;
		}
 
 
		for (ll j = 1; j <= n; j++) {
			ll val;
			cin >> val;
 
			v[j].second = val;
		}
 
		ll all_1 = 1;
		for (ll j = 1; j <= n; j++) {
			if (v[j].second == 0) {
				all_1 = 0;
			}
		}
 
		ll all_0 = 1;
		for (ll j = 1; j <= n; j++) {
			if (v[j].second == 1) {
				all_0 = 0;
			}
		}
 
		ll flag_sorted = 1;
		for (ll i = 1; i < n; i++) {
			if (v[i].first > v[i + 1].first) {
				flag_sorted = 0;
			}
		}
 
		if (flag_sorted == 1) {
			cout << "Yes" << "\n";
		} else {
			if (all_1 == 1 || all_0 == 1) {
				cout << "No" << "\n";
			} else {
				cout << "Yes" << "\n";
			}
		}
 
 
 
	}
 
 
	return 0;
}