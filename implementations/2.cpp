vector<long long> rectangularSquare(int n, vector<vector<int>> mat, int q, vector<vector<int>> query)
{
	vector<ll> ans;


	vector<vector<ll> > v( n + 1 , vector<ll> (n + 1, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
// cout<<"hello"<<endl;

			v[i + 1][j + 1] = v[i + 1][j] + mat[i][j];
		}
	}
	for (int j = 0; j <= n; j++)
	{
		for (int i = 1; i <= n; i++)
		{

			v[i][j] += v[i - 1][j];

		}
// cout<<endl;
	}
	for (auto it : query)
	{
		int x = it[0] + 1; int y = it[1] + 1; int l = it[2]; int b = it[3];
		int x1 = max(x - l, 1); int x2 = min(n, x + l);
		int y1 = max(y - b, 1); int y2 = min(n, y + b);
		ans.push_back(v[x2][y2] - v[x2][y1 - 1] - v[x1 - 1][y2] + v[x1 - 1][y1 - 1]);

	}
	return ans;

}