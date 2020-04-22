
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
		int n, m;
	cin>>n>>m;
	int *array1 = new int[n];
	int *array2 = new int[m];
	for(int i = 0; i < n; i++) {
		cin>>array1[i];
	}
	for(int i = 0; i < m; i++) {
		cin>>array2[i];
	}
	// Setup DP 
	int **matrix = new int*[n+1];
	for(int i = 0; i <= n; i++) {
		matrix[i] = new int[m+1];
		for(int j = 0; j <= m; j++) {
			matrix[i][j] = 0;
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <=m; ++j)
		{
			if (array1[i-1]==array2[j-1])
			{
				 matrix[i][j] = matrix[i-1][j-1]+1;
			}else{
				matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
			}
		}
	}
	int *lcs = new int[matrix[n][m]];
	int count = matrix[n][m];
	int i = n, j=m;
	while(count>0){
		if (matrix[i-1][j]==matrix[i][j])
		{
			i--;
		}else if(matrix[i][j-1] == matrix[i][j]) {
			// Value came from smaller array2
			j--;
		} else {
			// Value came from the letter at the current index
			lcs[count-1] = array1[i-1];
			i--;
			j--;
			count--;
		}
	}
	for(int i = 0; i < matrix[n][m]; i++) {
		cout<<lcs[i]<<" ";
	}
	return 0;
	}
