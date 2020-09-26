
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
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
constexpr int MOD = 1000000007;

int main()
{
  std::ios::sync_with_stdio(false);
  long N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> sum(N);
    for(size_t i=0;i<N; i++)
    {
        cin >> A[i];
    }
    for(ll i=N-2;i>=0;i--)
    {
        sum[i] = (sum[i+1] + A[i+1]) % MOD;
        //cerr << sum[i] << endl;
    }

    ll total = 0;
    for(size_t i=0;i<N-1; i++)
    {
        total += (A[i] * sum[i]) %MOD;
        total %= MOD;
    }
    cout << total << endl;
  return 0;
}
