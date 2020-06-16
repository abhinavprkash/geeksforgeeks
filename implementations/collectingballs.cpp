#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll helper(ll start, ll end, ll N, ll &ans){
    if (start>end)
    {
        return ans;
    }
    ll n =N;
    ll mid = (start+end)/2;
    ll k= mid;
    ll sharma = 0, singh =0;
    while (n>=k&&n>0)
    {
        sharma +=k;
        n=n-k;
        singh+=(n)/10;
        n=n-(n)/10;
    }
    sharma+=n;
    if (2*sharma<N)
    {
        return helper(mid+1,end,N,ans);
    }else
    {
        ans = k;
        return helper(start, mid-1, N, ans);
    }
    
    
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    cout<< helper(1,n,n,n)<<endl;
    return 0;
}
