//B. Drinks


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
	double T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	double k, sum =0.0;
	for (int i = 1; i <=T; ++i)
	{
		cin>>k;
		sum+=k;
	}
	cout<<fixed<<setprecision(12)<<sum/T<<endl;
	return 0;
}
