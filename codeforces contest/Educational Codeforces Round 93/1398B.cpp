
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
int n = 100;
void solve() {
	vi arr;
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') {
			count++;
		} else {
			if (count > 0) {
				arr.push_back(count);
			}
			count = 0;
		}
	}
	if (count) arr.push_back(count);
	count = 0;
	sort(arr.begin(), arr.end());
	for (int i = arr.size() - 1; i >= 0; i =i- 2) {
		count += arr[i];
	}
	cout << count << endl;
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
