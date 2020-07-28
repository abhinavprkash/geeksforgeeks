
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

int modExpo(int a, int b, int c){
	if (a == 0)
	{
		return 0;
	}
	if (b == 0)
	{
		return 1;
	}
	long ans;
	if ((b%2) == 0)
	{
		long smallAns = modExpo(a, b/2,c);
		ans = (smallAns*smallAns)%c;
	}
	else{
		long smallAns = modExpo(a, b-1,c);
		ans = (a%c);
		ans = (ans * smallAns)%c;
	}
	return int((ans+c)%c);
}

int main()
{
	std::ios::sync_with_stdio(false);
	int a =2, b =5, c= 5;
	cout<<modExpo(a,b,c)<<endl;
	return 0;
}
