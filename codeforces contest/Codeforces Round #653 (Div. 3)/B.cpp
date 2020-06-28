//B. Multiply by 2, divide by 6

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
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n;
       cin>>n;
       
       if(n==1){
          cout<<0<<endl;
          continue;
       } 
       int temp=n;
       int l=0,k=0;
       while(temp!=0){
           if(temp%2==0){
               l++;
               temp/=2;
           }
           else break;
       }
       temp=n;
       while(temp!=0){
           if(temp%3==0){
               k++;
               temp/=3;
           }
           else break;
       }
       bool flag=false;
       
       if(k==0 && l==0)
        flag=true;
       else if( (int)(n/((int)pow(2,l)*(int)pow(3,k))) != 1){    
        flag=true;
       }
        if(l>k || flag==true){
            
                cout<<-1<<endl;
            }
        else if(l<k){
                cout<<2*k-l<<endl;
            }
        else{
              cout<<k<<endl;  
            }
       
      
    }
    

    return 0;
}
