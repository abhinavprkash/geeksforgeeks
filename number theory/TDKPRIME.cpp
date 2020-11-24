
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

vi primes;
bool arr[90000001];

void sieve(){
	int maxN = 90000000;
	arr[0]=arr[1] = true;
	for (int i = 2; i*i <= maxN; ++i)
	{
		if (!arr[i] )
		{
			for (int j = i*i; j <= maxN; j+=i)
			{
				arr[j] = true;
			}
		}
	}
	for (int i = 2; i <= maxN; ++i)
	{
		if (!arr[i])
		{
			primes.push_back(i);
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	sieve();
	while (T--)
	{
		int n;
		cin>>n;
		cout<<primes[n-1]<<endl;
	}
	return 0;
}
