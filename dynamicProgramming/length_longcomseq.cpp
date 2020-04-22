
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

	int lcs_helper(char* s1, char* s2, int m, int n, int** dp){
		if (m==0||n==0)
		{
			return 0;
		}
		if (dp[m][n]>-1)
		{
			return dp[m][n];
		}
		int ans;
		if (s1[0]==s2[0])
		{
			ans = 1+lcs_helper(s1+1, s2+1, m-1, n-1, dp);
		}
		else{
			int option1 = lcs_helper(s1, s2+1,m,n-1, dp);
			int option2 = lcs_helper(s1+1, s2, m-1,n,dp);
			ans = max(option1, option2);
		}
		dp[m][n]=ans;
		return ans;
	}

	int lcs(char*s1, char*s2){
		int m = strlen(s1);
		int n = strlen(s2);
		int **dp = new int*[m+1];
		for (int i = 0; i <=m; ++i)
		{
			dp[i]= new int[n+1];
			for (int j = 0;j <= n; ++j)
			{
				dp[i][j]=-1;
			}
		}
		int ans = lcs_helper(s1, s2, m, n, dp);
		for (int i = 0; i <=m; ++i)
		{
			delete [] dp[i];
		}
		delete [] dp;
		return ans;
	}

	int main()
	{
		std::ios::sync_with_stdio(false);
		int m, n;
		cin>>m>>n;
		char a[m];
		char b[n];
		for (int i = 0; i < m; ++i)
		{
			cin>>a[i];
		}
		for (int j = 0; j < n; ++j)
		{
			cin>>b[j];
		}
		cout<<lcs(a,b)<<endl;
		return 0;
	}
