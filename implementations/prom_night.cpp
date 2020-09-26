
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

#include<bits/stdc++.h>
using namespace std;
int prom(int *a, int *b, int n, int m)
{
	if (n > m)
		return 0;
	int i, l, u, mid, ans;
	for (i = 0; i < n; i++)
	{
		l = i;
		u = n - 1;
		ans = -1;
		int k = a[i];
		while (l <= u)
		{
			mid = (l + u) / 2;
			if (b[mid] < k)
			{
				ans = mid;
				u = mid - 1;
			}
			else
				u = mid - 1;
		}
		if (ans == -1)
			return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n], b[m], i;
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i < m; i++)
			scanf("%d", &b[i]);
		sort(a, a + n);
		sort(b, b + m);
		if (prom(a, b, n, m))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}