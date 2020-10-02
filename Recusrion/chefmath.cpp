
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
#define N 1000000000


using namespace std;

ll fib[51];
int F;

ll ans(int f, int n, int k){
	if (n < 0)
	{
		return 0;
	}
	if (n == 0 && k == 0)
	{
		return 1;
	}
	if (n>0 && k>0 && f> 0 && n<= fib[f-1]*k)	
	{
		return ans(f-1,n,k) + ans(f, n-fib[f-1], k-1);
	}
	return 0;
}

int main()
{
	std::ios::sync_with_stdio(false);
	fib[0] = 1;
	fib[1] = 2;
	F = 2;
	for (int i = 2;; ++i)
	{	
	 ll nfib = fib[i-2] + fib[i-1];
        if (nfib <= N) {
            fib[F++] = nfib;
        } else break;
    }

    int z;
    scanf("%d", &z);
    while (z--) {
        int n, k;
        scanf("%d%d", &n, &k);
        printf("%lld\n", ans(F,n,k));
    }
	return 0;
}
