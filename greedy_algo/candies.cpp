
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
		int n; cin>>n;
		vector<int> temp(n);

		for (int i = 0; i < n; ++i)
		{
			cin>>temp[i];
		}
		vector<int> sol(n,1);

		ll ans =0;

		for (int i = 0; i < n; ++i)
		{
			if (i==0)
			{
				if (i+1<n && temp[i]>temp[i+1])
				{
					sol[i] = max(sol[i], sol[i+1]+1);
				}
			}
			else if (i!=n-1)
			{
				if(temp[i] > temp[i+1]){
                sol[i] = max(sol[i], sol[i+1] + 1);
            }
            if(temp[i] > temp[i-1]){
                sol[i] = max(sol[i], sol[i-1] + 1);
            }}
		}
		for(int i = n-1; i >= 0; i--){
        if(i == n-1){
            if(i-1 >= 0 && temp[i] > temp[i-1]){
                sol[i] = max(sol[i], sol[i-1] + 1);
            }
        }
        else if(i != 0){
            if(temp[i] > temp[i+1]){
                sol[i] = max(sol[i], sol[i+1] + 1);
            }
            if(temp[i] > temp[i-1]){
                sol[i] = max(sol[i], sol[i-1] + 1);
            }
        }
        else{
            if(temp[i] > temp[i+1]){
                sol[i] = max(sol[i], sol[i+1] + 1);
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        ans = ans + sol[i];
    }
    
    cout << ans << endl;
		return 0;
	}
