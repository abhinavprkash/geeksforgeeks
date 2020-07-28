
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

	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		cout << "Case #" << t << ": ";
		int n; string s;
		cin >> n;
		cin>>s;
		int n_1 = 0, n_2 = 0;
		for (int i = 0; i < n; ++i)
		{
			if (s[i] == 'A')
				n_1++;
			if (s[i] == 'B')
				n_2++;
		}
		if (abs(n_1 - n_2) != 1)
		{
			cout<<"N"<<endl;
		}
		else
		{
			cout<<"Y"<<endl;
		}

	}

	return 0;
}
