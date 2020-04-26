
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
	int count(int s[], int m, int n){
		int table[m+1][n+1];
		memset(table, 0, sizeof(table));

		for (int i = 0; i < m; ++i)
		{
			table[0][i] =1;
		}
		for (int i = 1; i <= m; ++i)
		{
			for (int j = 1; j <=n; ++j)
			{
				if (s[i-1]>j)
				{
					table[i][j] = table[i-1][j];
				}
				else{
					table[i][j] = table[i-1][j]+table[i][j-(i-1)];
				}
			}
		}
		return table[m][n];
		}
	int main() {
	// Read input
    int N, M;
    cin>>N;
    cin>>M;
    int *coin = new int[M];
    long *change = new long[N+1];
    for(int i = 0; i < M; i++) {
    	cin>>coin[i];
    }

    // Initialize change (change[i] = numbers of way to make i change) to zero
    memset(change, 0, sizeof(change));

    // Base case: There is 1 way to make change for zero cents, use no coins
    change[0] = 1;
    for(int i = 0; i < M; i++) {
        for(int j = coin[i]; j <= N; j++) {
            change[j] += change[j-coin[i]];
        }
    }
    
    // Print solution
    cout<<change[N];
    return 0;
}