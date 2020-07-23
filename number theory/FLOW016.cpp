//GCD and LCM Problem Code: FLOW016


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


long gcd(long a, long b){return (a == 0) ? b : gcd(b % a, a);}

int main(){

    int T; scanf("%d\n", &T);
    while(T--){

        long x, y; scanf("%ld %ld\n", &x, &y);
        printf("%ld %ld\n", gcd(x, y), (x * y / gcd(x, y)));
    }

    return 0;
}