
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

int pi[1000005];
string p;

int KMP() {
	int now;

	pi[0] = now = -1;

	for (int i = 1; i < p.length(); i++) {

		while (now != -1 && p[i] != p[now + 1])
			now = pi[now];

		if (p[i] == p[now + 1])
			pi[i] = ++now;
		else
			pi[i] = -1;


	}
}

int main() {
	cin >> p;
	KMP();
	int len = p.length();

	int maxi = pi[len - 1];
	int found = pi[maxi];
	if (maxi == -1)
		found = -1;

	for (int i = 1; i < (len - 1); i++) {
		if (pi[i] == maxi)
			found = maxi;
	}

	if (found == -1)
		cout << "Just a legend" << endl;
	else {
		cout << p.substr(0, found + 1) << endl;
	}


}