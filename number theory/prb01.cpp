//Primality Test Problem Code: PRB01


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

bool isPrime(int n) {
	if (n == 1)
	{
		return false;
	}
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
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
		if (isPrime(n) == true)
		{
			cout<<"yes\n";
		}
		else
			cout<<"no\n";
	}
	return 0;
}
