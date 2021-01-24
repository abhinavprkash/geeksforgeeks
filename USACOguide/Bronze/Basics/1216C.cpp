#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;
    
#define ll long long int
#define ld double
#define pb push_back
#define eb emplace_back
#define rep(i , j , n) for(ll i = j ; i < n ; i++)
#define pre(i , j , n) for(ll i = j ; i >= n ; i--) 
#define all(x) x.begin(), x.end()
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vll;
typedef vector<double>	vd;
typedef vector<bool>	vb;
typedef pair<ll,ll> 	pll;
#define br "\n"
#define ff first
#define ss second
#define debug(a...) cout<<#a<<": ";for(auto it:a)cout<<it<<" ";cout<<endl;
ll MAX = 1e6 + 1;
ll mod = 1e9 + 7;
#define MAXIM 100005
 
 
vll inter(vll &a,vll &b){
    vll v(4);
    v[0] = max(a[0],b[0]);
    v[1] = max(a[1],b[1]);
    v[2] = min(a[2],b[2]);
    v[3] = min(a[3],b[3]);
    return v;
}
 
ll area(vll &v){
    if(v[3] - v[1] < 0 || v[2] - v[0] < 0) return 0;
    return (v[3] - v[1])*(v[2] - v[0]);
}
 
void solve(){
    vll v(4),a(4),b(4);
    rep(i,0,4) cin >> v[i];
    rep(i,0,4) cin >> a[i];
    rep(i,0,4) cin >> b[i];
    vll temp1 = inter(v,a);
    vll temp2 = inter(v,b);
    vll temp3 = inter(temp1,temp2);
    if(area(v) <= area(temp1) + area(temp2) - area(temp3)) cout << "NO" << br;
    else cout << "YES" << br;
} 
 
int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    
	ll t = 1;
    // cin >> t;
    // calc();
	rep(i,0,t){
        // cout << "Case #" << i + 1 << ": ";
        solve();
        // test();
	}
}
