
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

bool isPowerOfTwo(ll n) 
{ 
    if (n == 0) 
        return 0; 
    while (n != 1) 
    { 
        if (n%2 != 0) 
            return 0; 
        n = n/2; 
    } 
    return 1; 
} 

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		ll n;
		cin>>n;
		if(isPowerOfTwo(n))
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}
	return 0;
}
