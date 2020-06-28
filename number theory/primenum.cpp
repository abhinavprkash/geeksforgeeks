//Find Prime numbers from 1 to N, tc n^3/2;

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

bool checkPrime(int n){
	int countFactors = 0;
	for (int j = 1; j*j <=n; ++j)
	{
		if ((n%j)==0)
		{
			if (j*j == n)
			{
				countFactors +=1;
			}
			else
			{
				countFactors +=2;
			}
		}
	}
	if (countFactors ==2)
	{
		return true;
	}
	return false;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int count = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (checkPrime(i))
		{		
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
