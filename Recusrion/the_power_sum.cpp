
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

int solve(int x, int n, int start){
	if (x == 0)
		return 1;
	int total= 0;
	for (int j = start + 1; pow(j, n) <= x; ++j)	{
		total += solve(x - pow(j, n), n, j);
	}
	return total;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int x, n;
	cin>>x>>n;
	cout<<solve(x,n, 0)<<endl;
	return 0;
}
