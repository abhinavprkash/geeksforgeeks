//A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not. Find the amount of almost prime numbers which are between 1 and n, inclusive.


//A. Almost Prime


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
	int n;
	cin >> n;
	int count = 0;
	bool b[3001] = {false};
	int pfactors[3001] = {0};
	for (int i = 2; i <= n; ++i)
	{
		if (!b[i])
		{
			for (int j = i + i; j <= n; j += i)
			{
				b[j] = true;
				pfactors[j] += 1;
			}
		}
		if (pfactors[i] == 2)
		{
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}
