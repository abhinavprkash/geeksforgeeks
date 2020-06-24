//B. AccurateLee


#include <stdio.h>
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



using namespace std;

char s[100010];

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        scanf("%s", s);
        int l = n;
        int r = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                r = i;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                l = i;
            }
        }
        if (l != n && r != -1) {
            for (int i = 0; i < n; i++) {
                if (i >= l && i < r) {
                    continue;
                }
                printf("%c", s[i]);
            }
            printf("\n");
        } else {
            printf("%s\n", s);
        }
    }
    return 0;
	return 0;
}
