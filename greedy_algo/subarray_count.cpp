
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
	 int main(){
        ll t,n,i,j,k,l;
        ios_base::sync_with_stdio(0);
        cin>>t;
        while(t--){
            cin>>n>>k;
            ll a[n];
            ll pref[n+1];
            pref[0]=0;
            for(i=0;i<n;i++){
                cin>>a[i];
            }
            for(i=1;i<=n;i++){
                pref[i]=pref[i-1]+a[i-1];
            }
            sort(pref,pref+n+1);

            //cout<<endl;
            ll ans=0;
            for(i=0;i<n;i++){
                ll val=pref[i]+k;
                ll cal=upper_bound(pref,pref+n+1,val)-pref;
               //cout<<cal<<" ";
                ans+=((n+1)-cal);
            }
            cout<<ans<<endl;
        }
    }
