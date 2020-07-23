
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
#define MOD 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

int mod_pow(long long a, int b){
    long long ret = 1;
    
    while(b){
        if(b & 1) ret = ret * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    
    return ret;
}

int main(){
    int a,b,n;
    
    scanf("%d %d %d",&a,&b,&n);
    
    long long C = 1;
    int ans = 0;
    
    for(int i = 0;i <= n;++i){
        int sum = i * a + (n - i)* b;
        bool ok = true;
        
        while(sum){
            int d = sum % 10;
            sum /= 10;
            if(d != a && d != b) ok = false;
        }
        
        if(ok) ans = (ans + C) % MOD;
        C = C * (n - i) % MOD;
        C = C * mod_pow(i + 1,MOD - 2) % MOD;
    }
    
    printf("%d\n",ans);
    
    return 0;
}