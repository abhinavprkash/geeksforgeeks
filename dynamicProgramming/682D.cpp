#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <sstream>
#include <queue>
#include <stack>
#include <bitset>

#define endl "\n"
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b)
#define siii(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sl(a) scanf("%lld",&a)
#define sll(a,b) scanf("%lld %lld",&a,&b)
#define pf printf
#define vi vector<int>
#define vii vector<pair<int,int> >
#define pii pair<int,int>
#define all(c) c.begin(),c.end()
#define ms(a,c) memset(a,c,sizeof(a))
#define tr(c,i) for(decltype((c).begin()) i=(c).begin();i!=(c).end();i++)
#define trr(c,i) for(decltype((c).rbegin()) i=(c).rbegin();i!=(c).rend();i++)

using namespace std;

#define N 1001
#define mod 1000000007
#define inf 1e9

typedef long long ll;
typedef unsigned long long ull;

int dp[N][N][11][2];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("Input.txt","r",stdin);
//    freopen("Output.txt","w",stdout);
	int n,m,k;
	string a,b;
	cin>>n>>m>>k;
	cin>>a>>b;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(int l=1;l<=k&&l<=min(i,j);l++)
			{
				if(a[i-1]==b[j-1])
				{
					dp[i][j][l][1]=max(dp[i-1][j-1][l-1][1],dp[i-1][j-1][l-1][0])+1;
					if(i>1&&j>1&&a[i-2]==b[j-2])
						dp[i][j][l][1]=max(dp[i][j][l][1],dp[i-1][j-1][l][1]+1);
				}
				else
					dp[i][j][l][1]=0;
				dp[i][j][l][0]=max(max(dp[i][j-1][l][0],dp[i][j-1][l][1]),max(dp[i-1][j][l][0],dp[i-1][j][l][1]));
				dp[i][j][l][0]=max(dp[i][j][l][0],max(dp[i-1][j-1][l][0],dp[i-1][j-1][l][1]));
			}
		}
	}
	cout<<max(dp[n][m][k][0],dp[n][m][k][1])<<endl;
	return 0;
}