
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

#define N 400005

using namespace std;


void solve() {
	int A, B, K;
		ll res = 0;
		cin >> A >> B >> K;
		vector<int> AA(K), BB(K);
		for (int i = 0; i < K; ++i) cin >> AA[i];
		for (int i = 0; i < K; ++i) cin >> BB[i];
		vector<pii> pairs;
		for (int i = 0; i < K; ++i) {
			pairs.push_back({ AA[i], BB[i] });
		}
		sort(AA.begin(), AA.end());
		sort(BB.begin(), BB.end());
		for (auto p : pairs) {
			int a = p.first, b = p.second;
			auto aa1 = lower_bound(AA.begin(), AA.end(), a);
			auto aa2 = upper_bound(AA.begin(), AA.end(), a);
			auto bb1 = lower_bound(BB.begin(), BB.end(), b);
			auto bb2 = upper_bound(BB.begin(), BB.end(), b);
			int aa = aa2 - aa1, bb = bb2 - bb1;
			res += K - (aa + bb - 1);
		}
		cout << res / 2 << '\n';

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
