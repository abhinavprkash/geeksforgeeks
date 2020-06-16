
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


int flag = 0;
void func(ll str, ll end)
{
	if (flag == 1)
	{
		return;
	}
	if (str >= end)
	{
		return;
	}
	char a, b, c, d, e, f;
	ll x = (end - str) / 4 + str;
	ll y = 3 * (end - str) / 4 + str;

	cout << x << endl;

	cin >> a;
	if (a == 'E')
	{
		flag = 1;
		return;
	}
	cout << y << endl;
	cin >> b; if (b == 'E')
	{
		flag = 1;
		return;
	}
	if (a == 'L' && b == 'L')
	{
		//cout<<y<<" ";
		func(str + 1, y - 1);
	}
	else if (a == 'G' && b == 'G')
	{
		func(x + 1, end);
	}
	else if (a == 'L' && b == 'G')
	{
		func(str + 1, x - 1);
		if (f == 0)
		{
			func(y + 1, end);
		}
	}
	else if (a == 'G' && b == 'L')
	{
		ll x2 = (x - str) / 4 + str;
		ll y2 =  3 * (x - str) / 4 + str;
		ll x3 = (end - x) / 4 + x;
		ll y3 =  3 * (end - x) / 4 + x;
		cout << x2 << endl;
		cin >> c;
		if (c == 'E')
		{
			flag = 1;
			return;
		}
		cout << y2 << endl; cin >> d;
		if (d == 'E')
		{
			flag = 1;
			return;
		}
		cout << x3 << endl;
		cin >> e;
		if (e == 'E')
		{
			flag = 1;
			return;
		}
		cout << y3 << endl;
		cin >> f;
		if (f == 'E')
		{
			flag = 1;
			return;
		}
		else if (c == 'L' && d == 'L')
		{
			func(str + 1, y2 - 1);
		}
		else if (e == 'G' && f == 'G')
		{
			func(x3 + 1, end);
		}
		else if (c == 'L' && d == 'G' && e == 'L' && f == 'L')
		{
			func(str + 1, x2 - 1);
			func(y2 + 1, y3);
		}
		else if (c == 'L' && d == 'G' && e == 'L' && f == 'G')
		{
			func(str + 1, x2); func(y2 + 1, x3 - 1);
			func(y3, end);
		}
		else if (c == 'L' && d == 'G' && e == 'G' && f == 'L')
		{
			func(str + 1, x2);
			func(y2 + 1, end);
		}
		else if (c == 'G' && d == 'L' && e == 'L' && f == 'L')
		{
			func(str + 1, x3);
		}
		else if (c == 'G' && d == 'L' && e == 'L' && f == 'G')
		{
			func(str + 1, x3 - 1);
			func(y3 + 1, end);
		}
		else if (c == 'G' && d == 'L' && e == 'G' && f == 'L')
		{
			func(str + 1, y2 - 1);
			func(x3 + 1, end);
		}
		else if (c == 'G' && d == 'G' && e == 'L' && f == 'L')
		{
			func(x2 + 1, y3 - 1);
		}
		else if (c == 'G' && d == 'G' && e == 'L' && f == 'G')
		{
			func(x2 + 1, x3 - 1);
			func(y3 + 1, end);
		}
		else if (c == 'G' && d == 'G' && e == 'G' && f == 'L')
		{
			func(x2 + 1, end);
		}
	}
}
int main()
{


	ll n;
	cin >> n;
	int i = 0;
	char ch;
	while (1)
	{
		if (i > 70)
			break;
		cout << n << "\n";
		cout << flush;
		cin >> ch;

		if (ch != 'L')
			break;
		i++;

	}





	ll l = 1, r = n;
	while (ch != 'E') {
		if (i > 70)
			break;

		ll mid = (l + r + 1) / 2; cout << mid << "\n";
		cout << flush;

		cin >> ch;
		i++;
		if (ch == 'E')
			return 0;
		if (ch == 'L')
			r = mid - 1;
		else
			l = mid;



		while (1)
		{
			if (i > 70)
				break;
			if (ch == 'E')
				return 0;
			cout << l << "\n";
			cout << flush;
			cin >> ch;

			if (ch != 'G')
				break;
			else
				l++;
			i++;

		}
	}
	int str = 0;
	func(str, n);
}