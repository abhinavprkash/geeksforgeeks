
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#include<stdio.h>
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
const int MAX       = 100005;

char S[MAX];
int Z[MAX];
int C[MAX];
int main(int argc, char **argv)
{
	scanf("%s", S);
	int n = strlen(S);
	Z[0] = n;

	int l = 0, r = 0;
	for (int i = 1; i < n; i++) {
		if (r < i) {
			l = r = i;
			while (S[r] == S[r - l])
				r++;
			Z[i] = r - l;
		} else {
			int b = r - i;
			int j = i - l;
			if (Z[j] < b) {
				Z[i] = Z[j];
			} else if (Z[j] > b) {
				Z[i] = b;
			} else {
				l = i;
				r = i + b;
				while (S[r] == S[r - l])
					r++;
				Z[i] = r - l;
			}
		}
	}

	for (int i = 0; i < n; i++)
		C[i] = Z[i];

	sort(C, C + n);

	int length = 1;
	vector< pair<int, int> > ans;
	for (int i = n - 1; i >= 0; i--) {
		if (Z[i] == length) {
			int t = (C + n) - lower_bound(C, C + n, length);
			ans.push_back(make_pair(length, t));
		}

		length++;
	}

	printf("%d\n", ans.size());
	for (pair<int, int> p : ans)
		printf("%d %d\n", p.first, p.second);
	return 0;
}