/*Chefina and Swaps Problem Code: CHFNSWPS
submitted by Abhinav Prakash
username abhinav_526 */


#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define um unordered_map<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define sll set<ll>
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
ll find_ans(um map1, um map2, ll count, sll s, ll smallest)
{
	for (auto i : map1)
	{
		if (i.s & 1)
		{
			return -1;
		}
	}
	for (auto j : map2)
	{
		if (j.s & 1)
		{
			return -1;
		}
	}
	ll ans = 0;
	for (auto k : s)
	{
		ll r = max(map1[k], map2[k]);
		if (r / 2 <= count)
		{
			if (k * (r / 2) > 2 * smallest * (r / 2))
			{
				ans += (2 * smallest * (r / 2));
			}
			else
			{
				ans += k * (r / 2);
			}

			count -= r / 2;
		}
		else
		{
			if (k * count > 2 * count * smallest)
			{
				ans += (smallest * count * 2);
			}
			else
			{
				ans += (k * count);
			}

			count = 0;
		}

		if (count == 0)
		{
			return ans;
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vll a;
		vll b;
		ll x;
		for (ll i = 0; i < n; i++)
		{
			cin >> x;
			a.push_back(x);
		}
		for (ll i = 0; i < n; i++)
		{
			cin >> x;
			b.push_back(x);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		um map1;
		um map2;
		ll i = 0;
		ll j = 0;
		ll count = 0;
		sll s;
		while (i < n && j < n)
		{
			if (a[i] == b[j])
			{
				i++;
				j++;
			}
			else if (a[i] > b[j])
			{
				map1[b[j]] += 1;
				j++;
				count++;
				s.insert(b[j]);
			}
			else if (b[j] > a[i])
			{
				map2[a[i]] += 1;
				i++;
				count++;
				s.insert(a[i]);
			}
		}
		while (i < n)
		{
			map1[a[i]] += 1;
			i++;
			count++;
			s.insert(a[i]);
		}
		while (j < n)
		{
			map2[b[j]] += 1;
			j++;
			count++;
			s.insert(b[j]);
		}
		ll ans = 0;
		count = count / 4;
		ll smallest = a[0] < b[0] ? a[0] : b[0];

		ans = find_ans(map1, map2, count, s, smallest);
		cout << ans << endl;
	}
}
