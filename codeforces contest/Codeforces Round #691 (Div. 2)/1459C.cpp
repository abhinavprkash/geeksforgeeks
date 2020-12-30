
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

int gcd(vi  arr, ll n) 
{ 
    int resultult = arr[1]; 
    for (int i = 2; i < n; i++) 
    { 
        resultult = __gcd(arr[i], resultult); 

        if(resultult == 1) 
        { 
           return 1; 
        }
    }
    return resultult; 
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n,m;
    cin>>n>>m;
    vi a(n), b(m);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    } 
    for(int i=0;i<m;i++) {
        cin>>b[i];
    }
    vi ans(m);
    sort(all(a));
    int result;
    if(n>=2) {

        int result=a[1]-a[0];
        for(int i=2;i<n;i++) {
            result= __gcd(result,a[i]-a[0]);
            if(result==1) {
                break;
            }
        }
        for(int i=0;i<m;i++) {
            ans[i] = __gcd(b[i]+a[0],result);
        }
    } 
    else {
        for(int i=0;i<m;i++) {
            ans[i] = a[0]+b[i];
        }
    }


    for(int x:ans) {
        cout<<x<<" ";
    }
}
