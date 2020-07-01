//ecluids algo


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

int gcd (int a, int b){
	if(a<b){
		return gcd(a,b);
	}
	if (b == 0 )
	{
		return 0;
	}
	return gcd(b, a%b);
}

int main()
{
	std::ios::sync_with_stdio(false);
	int a, b;
	cin>>a>>b;
	cout<<"gcd is"<<gcd(a,b)<<endl;
	return 0;
}
