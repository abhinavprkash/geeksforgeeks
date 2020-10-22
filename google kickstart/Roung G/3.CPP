
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
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


using namespace std;
long costsumn(int wheel[], int target, int N, int W, long ans) {
	long sum = 0;
	for (int j = 0; j < W; ++j)
	{
		int t = 0;
		if (wheel[j] > target) {
			t = abs(N - wheel[j] + target);
		} else {
			t = abs(N - target + wheel[j]);
		}
		int temp = min(abs(target - wheel[j]), t);
		sum += temp;

		if (sum > ans) return ans;
	}

	return sum;
}



int32_t main()
{
	IOS;
	int T;
	cin >> T;
	int cn = 1;
	while (T > 0) {
		long ans = INT_MAX;
		int W, N;
		cin>>W>>N;

		int wheel[W];

		for (int i = 0; i < W; i++) {
			cin>>wheel[i];
		}

		for (int i = 0; i < W; i++) {
			ans = min(ans, costsumn(wheel, wheel[i], N, W, ans));
		}

		cout<<"Case #"<<cn<<": "<<ans<<endl;


		cn++;
		T--;
	}
}