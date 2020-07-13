
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



int solve()
{
	int n, count = 0;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int t1 = 0, t2 = 0;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			t1++;
			t2 = 0;
			if (t1 == 4)
			{
				t1 = 0;
				count++;
			}
		}
		else if (arr[i] < arr[i - 1])
		{
			t2++;
			t1 = 0;
			if (t2 == 4)
			{
				t2 = 0;
				count++;
			}
		}
	}

	return count;
}

int main()
{
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++)
		cout << "Case #" << i << ": " << solve() << endl;

	return 0;
}