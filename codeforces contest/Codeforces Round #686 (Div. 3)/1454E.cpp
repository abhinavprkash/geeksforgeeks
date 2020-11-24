
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

void solve() {
	ll n;cin >> n;
		ll temp = n;
		vll ans;
		map<ll, ll> fac;
		for(ll i = 2;i * i <= n;i++){
			while(n % i == 0){
				fac[i]++;
				n /= i;
			}
		}
		if(n != 1)fac[n]++;
		ll max_count = 0;
		ll max_num = 0;
		for(auto p : fac){
			if(p.second > max_count){
				max_count = p.second;
				max_num = p.first;
			}
		}
		ll current_pro = pow(max_num, max_count);
		ll remainder_pro = temp / current_pro; 
		if(remainder_pro % max_num != 0){
			max_count--;
			remainder_pro *= max_num;
		}
		cout << max_count + 1 << endl;
		for(int i = 0;i < max_count;i++)
			cout << max_num << ' ';
		cout << remainder_pro << endl;
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
