//D - Not Divisible


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
#define rep(i, n) for (int i = 0; i < (n); ++i)


using namespace std;

const int M = 1000005;

int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	vi A(n);
	rep(i,n) cin>>A[i];
	sort(A.begin(), A.end());

	vi cnt(M);
	for(int x:A){
		if (cnt[x] != 0)
		{
			cnt[x]++;
			continue;

		}
		for (int i = x; i < M; i+=x)
		{
			cnt[i]++;
		}
	}
	int ans =0;
	for(int x :A){
		if(cnt[x] ==1){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
