#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll a[n];ll product =1;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        }
    for(i=0;i<n;i++)
    {
    	product = (product*a[i]) % (1000000007);
    }
    cout<<product<<endl;
    return 0;
}