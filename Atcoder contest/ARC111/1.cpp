
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
long long int calc(long long int n, long long int M) {
    long long int sq = M * M;
    long long int pow = 10;
    long long int ret = 1;
    while (n > 0) {
        if (n & 1) {
            ret = (ret * pow) % sq;
        }
        pow = (pow * pow) % sq;
        n >>= 1;
    }
    return (ret / M) % M;
}


int main() {
    long long int N, M;
    cin >> N >> M;

    cout << calc(N, M) << endl;;
}