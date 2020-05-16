
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

bool check_even(int n, int k) {
	int rem = n - 2 * k;
	if (rem < 0)
		return 0;
	if (rem & 1)
		return 0;
	cout << "YES\n";
	for (int i = 0; i < k - 1; ++i)

		cout << 2 << ' ';
	cout << 2 + rem << endl;
	return 1;
}

bool check_odd(int n, int k) {
	int rem = n - k;
	if (rem < 0)
		return 0;
	if (rem & 1)
		return 0;
	cout << "YES\n";
	for (int i = 0; i < k - 1; ++i)

		cout << 1 << ' ';
	cout << 1 + rem << endl;
	return 1;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n, k;
		cin >> n >> k;
		if (check_even(n, k) || check_odd(n, k))
			continue;
		else
			cout << "NO\n";
	}
	return 0;
}
