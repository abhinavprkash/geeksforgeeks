#include <bits/stdc++.h>
    #include <math.h>
 
    using namespace std;
    typedef long long ll;
    typedef unsigned long long ull;
    # define M_PI  3.14159265358979323846
 
 
    const int M=1e9+7;
    long long mod(long long x){
        return ((x%M + M)%M);
    }
    long long add(long long a, long long b){
        return mod(mod(a)+mod(b));
    }
 
    int r,g,b;
    vector<ll>ar;
    vector<ll>ag;
    vector<ll>ab;
    long long ans=0;
    long long dp[205][205][205];
    long long ok(int x, int y , int z){
        if((x>=r && y>=g)||(x>=r && z>=b)||(y>=g && z>=b)){
            return 0;
        }
        if(dp[x][y][z]!=-1)
            return dp[x][y][z];
        long long maxi=0;
        if(x<r && y<g)
            maxi=max(maxi,ar[x]*ag[y] + ok(x+1,y+1,z));
        if(x<r && z<b)
            maxi=max(maxi,ar[x]*ab[z] + ok(x+1,y,z+1));
        if(y<g && z<b)
            maxi=max(maxi,ag[y]*ab[z] + ok(x,y+1,z+1));
        ans=max(ans,maxi);
        return dp[x][y][z]=maxi;
    }
    void solve(){
        cin>>r>>g>>b;
        ar.resize(r);
        ag.resize(g);
        ab.resize(b);
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<r;i++)
            cin>>ar[i];
        for(int i=0;i<g;i++)
            cin>>ag[i];
        for(int i=0;i<b;i++)
            cin>>ab[i];
        sort(ar.rbegin(),ar.rend());
        sort(ag.rbegin(),ag.rend());
        sort(ab.rbegin(),ab.rend());
        ok(0,0,0);
        cout<<ans;
        return;
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
        int t=1;
        // cin>>t;
        for(int i=1;i<=t;i++){
//            cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }