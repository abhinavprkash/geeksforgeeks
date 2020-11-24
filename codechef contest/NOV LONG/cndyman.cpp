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


int main(){ 

    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);  

    ll t;  
    cin>>t; 
    while(t--){ 
        ll n,i,j,q,pos=-1,firstOne=0,midOne=0; 
        cin>>n; 
        ll a[n],prefix[n+1];   
        for(i=0;i<n;i++)    
            cin>>a[i];  

        prefix[0]=0;    

        for(i=0;i<n;i++){   
            if(a[0]==1){    
                firstOne=1; 
                prefix[i+1]=1;  
            }else if(a[i+1]==1&&(i<n-2)){   
                midOne=1;   

                pos=i;  
                if(a[i]%2==0)   
                    prefix[i+1]=(prefix[i]+a[i]-1)%MOD; 
                else{   
                    prefix[i+1]=(prefix[i]+(a[i]))%MOD; 
                }   
            }else{  
                if(i!=n-1){ 
                    if(a[i]%2==0)   
                        prefix[i+1]=(prefix[i]+a[i])%MOD;   
                    else    
                        prefix[i+1]=(prefix[i]+(a[i]-1))%MOD;   
                }else{  
                    if(a[n-1]%2!=0) 
                        prefix[i+1]=(prefix[i]+a[i])%MOD;   
                    else    
                        prefix[i+1]=(prefix[i]+a[i]-1)%MOD; 

                }   
            }   
        }  
        cin>>q; 
        int r,ans=0;    
        for(i=1;i<=q;i++){  
            ans=0;  
            cin>>r; 
            int times=r/n;  
            int left=r%n;   
            ans=(times*prefix[n])%MOD;  
            if(firstOne==1){    
                if(times==0)    
                    ans=1;  
                else{   
                    if(left>1)  
                        ans=(times+1)%MOD;  
                    else    
                        ans=times;  
                }   

            }else if(left==0){  
                if(a[n-1]%2==0) 
                ans=(ans+1)%MOD;    
            }else if(left!=0){  
                if(left-1==pos&&midOne==1){ 
                    if(a[left-1]%2==0){ 
                        ans=(ans+prefix[left]+1)%MOD;   
                    }else{  
                        ans=(ans+prefix[left])%MOD; 
                    }   
                }else if(left-1==pos+1&&midOne==1){ 
                        if(a[left-2]%2==0)  
                            ans=(ans+prefix[left]+2)%MOD;   
                        else    
                            ans=(ans+prefix[left])%MOD; 
                }else if(a[left-1]%2!=0)    
                    ans=(ans+prefix[left]+1)%MOD;   
                else if(a[left-1]%2==0){    
                    ans=(ans+prefix[left])%MOD; 
                }   
            }   
            cout<<ans<<"\n";    
        }   

    }   
}