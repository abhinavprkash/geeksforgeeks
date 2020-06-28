
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



int main() {
    ll n, k;
    cin >> n >> k;
    priority_queue< ll,vll ,greater< ll > > pa, pb, pab;
    ll time, a, b;
    for(int i = 1; i <= n; i++){
        cin >> time >> a >> b;
        if(a == 1 && b == 1){
            pab.push(time);
        }else if(a == 1){
            pa.push(time);
        }else if(b == 1){
            pb.push(time);
        }
    }
    ll cnt = 0, sum = 0;
    while((cnt < k) && !pa.empty() && !pb.empty() && !pab.empty()){
        ll a = pa.top();
        ll b = pb.top();
        ll ab = pab.top();
        if(ab <= (a+b)){
            sum += ab;
            pab.pop();
        }else{
            sum += (a+b);
            pa.pop();
            pb.pop();
        }
        cnt++;
    }
    if(cnt == k){
        cout << sum << endl;
        return 0;
    }
    if(pa.empty() || pb.empty()){
        while(cnt < k && !pab.empty()){
            sum += pab.top();
            pab.pop();
            cnt++;
        }
        if(cnt == k){
            cout << sum << endl;
            return 0;
        }else{
            cout << "-1" << endl;
            return 0;
        }
    }
    if(pab.empty()){
        while(cnt < k && !pa.empty() && !pb.empty()){
            sum += pa.top();
            sum += pb.top();
            pa.pop();
            pb.pop();
            cnt++;
        }
        if(cnt == k){
            cout << sum << endl;
            return 0;
        }else{
            cout << "-1" << endl;
            return 0;
        }
    }
}