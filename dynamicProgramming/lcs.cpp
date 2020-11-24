int lcs(string s, string t)
{
	int n=s.length();
	int m=t.length();
	int **ans=new int* [n+1];
	for(int i=0; i<n+1; i++)
	{
		ans[i]=new int [m+1];
		for(int j=0; j<m+1; j++)
		{
			ans[i][j]=0;
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(s[n-i]==t[m-j])
			{
				ans[i][j]=ans[i-1][j-1]+1;
			}
			else
			{
				ans[i][j]=max(ans[i-1][j], ans[i][j-1]);
			}
		}
	}
	int ans= ans[n][m];
	return ans;
}