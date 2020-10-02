
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

	long int s, x, n, d = 0, day = 1, j = 0, i, k, t1, t2, m;

	scanf("%ld %ld %ld\n", &s, &x, &n);

	long int t[n], y[n];

	for ( i = 0; i < n; i++)

	{

		scanf("%ld %ld\n", &t[i], &y[i]);

	}

	for (m = 0; m < n; m++)

	{

		for (k = 0; k < n - m - 1; k++)

		{

			if (t[k] > t[k + 1])

			{

				t1 = t[k];

				t[k] = t[k + 1];

				t[k + 1] = t1;

				t2 = y[k];

				y[k] = y[k + 1];

				y[k + 1] = t2;

			}

		}

	}

	while (d < s)

	{

		if (day != t[j])

		{

			d += x;

			day++;

		}

		else

		{

			d += y[j];

			day++;

			j++;

		}

	}

	printf("%ld\n", day - 1);

}