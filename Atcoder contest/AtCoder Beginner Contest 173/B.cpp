//B - Judge Status Summary


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
	int ac = 0, wa = 0, tle = 0, re = 0;

	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		string s;
		cin >> s;
		if (s == "AC")
		{
			ac++;
		}
		else if (s == "WA")
		{
			wa++;
		}
		else if (s == "TLE")
		{
			tle++;
		}
		else
		{
			re++;
		}
	}
	cout << "AC " << "x " << ac << endl;
	cout << "WA " << "x " << wa << endl;

	cout << "TLE " << "x " << tle << endl;
	cout << "RE " << "x " << re << endl;



	return 0;
}
