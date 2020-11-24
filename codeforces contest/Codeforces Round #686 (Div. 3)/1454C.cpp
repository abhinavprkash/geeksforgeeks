
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

int path(vector<int> g[],int s,int d, bool visit[])
{
    return 0;
}


void solve(){
	int n;cin >> n;
		vi arr(n);
		map<int, int> last;
		map<int, int> cnt;
		for(int i = 0;i < n;i++)
			cin >> arr[i];
		for(int i = 0;i < n;i++)
			last[arr[i]] = -1;
		for(int i = 0;i < n;i++){
			if(last[arr[i]] != i - 1)
				cnt[arr[i]]++;
			last[arr[i]] = i;
		}
		for(auto p : last){
			if(arr[n - 1] != p.first)cnt[p.first]++;
		}
		int ans = INT_MAX;
		for(int i = 0;i < n;i++){
			ans = min(ans, cnt[arr[i]]);
		}
		cout << ans << endl;
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
