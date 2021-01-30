
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
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
const int mod = 1e9 + 7;
const int maxn = 2e3 + 10;


int n, m;
char matrix[maxn][maxn];

int tot[2][maxn][maxn];

int soma_down[maxn][maxn], soma_right[maxn][maxn];

int dp[2][maxn][maxn];

int main(void)
{
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf(" %c", &matrix[i][j]);

	for (int i = n; i >= 1; i--)
	{
		for (int j = m; j >= 1; j--)
		{
			tot[0][i][j] = tot[0][i][j + 1] + (matrix[i][j] == 'B');

			tot[1][i][j] = tot[1][i + 1][j] + (matrix[i][j] == 'B');
		}
	}

	for (int i = n; i >= 1; i--)
	{
		for (int j = m; j >= 1; j--)
		{
			if (i == n && j == m)
			{
				dp[0][i][j] = dp[1][i][j] = (matrix[i][j] == 'B' ? 0 : 1);

				soma_down[i][j] = (soma_down[i][j + 1] + dp[1][i][j]) % mod;
				soma_right[i][j] = (soma_right[i + 1][j] + dp[0][i][j]) % mod;

				continue;
			}

			dp[0][i][j] = (soma_down[i][j + 1] - soma_down[i][m - tot[0][i][j + 1] + 1] + mod) % mod;
			dp[1][i][j] = (soma_right[i + 1][j] - soma_right[n - tot[1][i + 1][j] + 1][j] + mod) % mod;

			soma_down[i][j] = (soma_down[i][j + 1] + dp[1][i][j]) % mod;
			soma_right[i][j] = (soma_right[i + 1][j] + dp[0][i][j]) % mod;
		}
	}

	if (n == 1 && m == 1)
	{
		printf("%d\n", (matrix[1][1] == 'B' ? 0 : 1));
		return 0;
	}

	printf("%d\n", (dp[0][1][1] + dp[1][1][1]) % mod);
}