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
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n0, n1, n2;
		cin >> n0 >> n1 >> n2;
		if (n2 && !n1 && !n0)
		{
			for (int i = 0; i < n2 + 1; ++i)
				cout << "1";
			cout << '\n';
			continue;
		}
		for (int i = 0; i < n0 + 1; ++i)
			cout << '0';
		if (!n1)
		{
			cout << '\n';
			continue;
		}
		for (int i = 0; i < n2 + 1; ++i)
			cout << '1';
		n1--;
		char cur = '0';
		while (n1--)
		{
			cout << cur;
			cur = '0' + '1' - cur;
		}
		cout << '\n';
	}
	return 0;
}
