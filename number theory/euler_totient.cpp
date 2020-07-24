
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

void eulerPhi(int n){
	int phi[n+1];

	for (int i = 1; i <=n; ++i)
	{
		phi[i] = i;
	}

	for (int i = 2; i <= n; ++i)
	{
		if (phi[i] == i)
		{
			phi[i] = i-1;
			for (int j = 2*i; j <=n; j+=i)
			{
				phi[j] = (phi[j]*(i-1))/i;
			}
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		cout<<"Euler Totient Phi For"<< i <<"Is :"<<phi[i]<<endl;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	eulerPhi(10);
	return 0;
}
