#include <bits/stdc++.h>

using namespace std;

int kadane(vector<int> v){
	int n = v.size();
	int maxtillnow = 0;
	int maxendinghere =0;

	for (int i = 0; i < n; ++i)
	{
		maxendinghere = max(v[i], v[i]+maxendinghere);
		maxtillnow = max(maxtillnow, maxendinghere);
	}
	return maxtillnow;
}

int go(vector<vector> arr, int m, int n){
	int ans = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		std::vector<int> sum(m,0);
		for (int j = 0; j < n; ++j)
		{
			for(int k = 0; k < m; ++k) {
				sum[k]+=arr[k][j];
			}
			int temp = kadane(sum);
			ans = max(ans, temp);
		}
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;
	cin>>m>>n;
	vector<vector<int>> matrix(m, vector<int> (n,0));
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<go(matrix,m,n)<<endl;
	return 0;
}