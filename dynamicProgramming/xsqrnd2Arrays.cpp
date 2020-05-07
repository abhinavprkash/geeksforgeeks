
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

int main()
{
    ll n,q;
    cin>>n>>q;
    ll a[n],b[n];
    for(ll i = 0;i<n;i++) cin>>a[i];
    for(ll i = 0;i<n;i++) cin>>b[i];
    ll ab[n],ba[n];
    ab[0]=a[0];
    ba[0]=b[0];
    for(ll i = 1;i<n;i++)
    {
        if(i&1)
        {
            ab[i] = ab[i-1] + b[i];
            ba[i] = ba[i-1] + a[i];
        }
        else
        {
            ab[i] = ab[i-1] + a[i];
            ba[i] = ba[i-1] + b[i];
        }
    }
    while(q--)
    {
        ll t,l,r;
        cin>>t>>l>>r;
        l--,r--;
        ll sum = 0;
        if(l&1)
        {
            if(t==1)
                t=2;
            else
                t=1;
        }
        if(t==1)
        {
            sum+=ab[r];
            if(l)
                sum-=ab[l-1];
        }
        else
        {
            sum+=ba[r];
            if(l)
                sum-=ba[l-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}