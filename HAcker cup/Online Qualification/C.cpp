
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
#define vpii vector<pair<int,int>>
#define mii map<int, int>

using namespace std;

void solve(){
	int n;
	cin>>n;
	vpii tree(n);
	for (int i = 0; i < n; ++i)
	{
		cin>> tree[i].f;
		cin>> tree[i].s;
	}
	sort(tree.begin(), tree.end());

	mii forward, backw;

	for (int i = 0; i < n; ++i)
	{
		int start = tree[i].f;
		int end = tree[i].f + tree[i].s;
		forward[end] = max(forward[end], forward[start] + tree[i].s);
	}

	for (int i = n-1; i >= 0; --i)
	{
		int start = tree[i].f;
		int end = tree[i].f - tree[i].s;
		backw[end] = max(backw[end], backw[start] + tree[i].s);
	}
	int mLength = 0;
	for(auto it : forward){
		int pos = it.f;
		mLength = max(mLength, forward[pos]+ backw[pos]);
	}
	for(auto it : backw){
		int pos = it.f;
		mLength = max(mLength, forward[pos]+ backw[pos]);
	}
	cout<<mLength<<endl;

}

int main()
{
	std::ios::sync_with_stdio(false);

	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		
		cout << "Case #" << t << ": ";
		solve();
	}

	return 0;
}
