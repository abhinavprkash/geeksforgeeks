
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
#define INF 1e9
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

void solve() {
	vector<int > v;
	int a[200000];
	int b[200000];
	int n;
	cin >> n;// number of participants

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		b[i] = a[i];
	}


	sort(a, a + n);
	a[n] = INF;

	int num = -1;
	int first = -999;
	int flag = -1;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] != a[i + 1])
		{

			if (flag == -1)
			{
				num = a[i];
				break;
			} else {
				flag = -1;
			}

		} else {
			flag++;
		}

	}


	if (num == -1)
		cout << "-1";
	else {
		for (int i = 0; i < n; ++i)
		{
			if (b[i] == num)
				cout << i + 1;
		}
	}

	cout << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		solve();
	}
	return 0;
}
