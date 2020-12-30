
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#define endl "\n"
#define ll long long int
#define umsi unordered_map<string, int>
#define vi vector<int>
#define vs vector<string>
#define mss map<string, string>
#define spis set<pair<int, string>>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,total_sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define for_loop(i,n) for(int i=0;i<n;i++)
#define for_loop1(i,n) for(int i=1;i<=n;i++)
#define pb push_back


using namespace std;

int slide(string s, int total_size, int no, int nz, vector<int> l, int so, int se, int n)
{
	set<pair<pii, pii > > sew;
	sew.insert(mp(mp(no, nz), mp(so, se)));
	for (int i = total_size; i < n; i++)
	{
		if (s[i - total_size] == '1')
		{
			l.erase(l.begin());
			int t = se;
			se = so;
			so = t;
			no -= 1;
		}
		else
		{
			nz -= 1;
			l[0] -= 1;
			se -= 1;
		}
		if (s[i] == '1')
		{
			no += 1;
			l.pb(0);
		}
		else
		{
			nz += 1;
			l[l.size() - 1] += 1;
			if (l.size() % 2 == 1)
			{
				se += 1;
			}
			else
			{
				so += 1;
			}
		}
		sew.insert(mp(mp(no, nz), mp(so, se)));
	}
	return sew.size();
}
int string_ope(string s, int n, int len)
{
	vector<int> l;
	int rt = 0, no = 0, nz = 0, so = 0, se = 0, cur = 0;
	for_loop(i, n)	{
		if (s[i] == '0')
		{
			if (cur % 2 == 0)
				se += 1;
			else
				so += 1;
			rt += 1;
			nz += 1;
		}
		else
		{
			l.pb(rt);
			rt = 0;
			cur += 1;
			no += 1;
		}
	}
	l.pb(rt);
	return slide(s, n, no, nz, l, so, se, len);
}
void solve()
{
	string s;
	cin >> s;
	int ans = 0;
	for_loop (i ,s.size())
	{
		ans += string_ope(s, i + 1, s.size());
	}
	cout << ans << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c = 0;
	int t;
	cin >> t;
	while (t--)
	{
		solve();
		c += 1;
	}
	return 0;
}