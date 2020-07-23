//A. Noldbach problem


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
	ll i, j, k, n, p;
	cin >> n >> k;
	ll arr[n+1];

	for (int i = 0; i <= n; ++i)
	{
		arr[i] = 1;
	}

	arr[0] = arr[1] = 0;
	arr[2] = 1;
	for (int i = 4; i <= n; i+=2)
	{
		arr[i] = 0;
	}
	for (int i = 3; i <= n; i+=2)
	{
		if (arr[i] == 1)
		{
			int x = 2;
			while (i * x <= n) {
				arr[i * x] = 0;
				x++;
			}
		}
	}
	vector<ll> v;
	for (i = 0; i <= n; i++)
	{
		if (arr[i] == 1)
			v.push_back(i);
	}

	int count = 0;
	for (i = 0; i < (v.size()); i++)
	{
		for (j = 0; j < v.size(); j++)
		{
			if (v[j] + v[j + 1] + 1 == v[i])
			{
				count++;
				break;
			}
		}
	}

	if (count >= k)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
