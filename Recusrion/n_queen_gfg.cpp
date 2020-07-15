//The n-queens puzzle is the problem of placing n queens on an n×n chessboard such that no two queens attack each other. Given an integer n, print all distinct solutions to the n-queens puzzle. Each solution contains distinct board configurations of the n-queens’ placement, where the solutions are a permutation of [1,2,3..n] in increasing order, here the number in the ith place denotes that the ith-column queen is placed in the row with that number. For eg below figure represents a chessboard [3 1 4 2].


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

bool IsSafe(vector<vector<int>> &Mat,int N,int R,int C){
	if(R==0)return true;
// // 	Same Row
// 	for(int j=0;j<C;j++)
// 		if(Mat[R][j])
// 			return false;
//  Same Col
	for(int i=R-1;i>=0;i--)
		if(Mat[i][C])
			return false;

//  Left Upper Diagnol
	for(int i=R-1,j=C-1;i>=0 && j>=0;i--,j--)
		if(Mat[i][j])
			return false;

//  Right Upper Diagnol
	for(int i=R-1,j=C+1;i>=0 && j<N;i--,j++)
		if(Mat[i][j])
			return false;

// Successfully Placed
return true;
}

void DFS(vvi &Mat, int &count, int n, vi cols, vvi &sol, int r=0, int c=0){
	if (r == n)
	{
		count++;
		sol.push_back(cols);
		return;
	}
	for (int j = 0; j < n; ++j)
	{
		if (IsSafe(Mat, n, r, j))
		{
			Mat[r][j] = 1;
			cols[j] = r+1;
			DFS(Mat, count, n, cols, sol, r+1,c);
			Mat[r][j]= 0;
			cols[j] = 0;
		}
	}
}

void solution(int n){
	vvi Mat(n, vi(n,0));
	vi cols(n,0);
	int count = 0;
	vvi sol;
	DFS(Mat, count, n, cols, sol);
	sort(sol.begin(), sol.end());
	for(auto i: sol){
		cout<<"[";
		for(auto j:i)
			cout<<j<<" ";
		cout<<"] ";
	}
	if (sol.size()== 0)
		cout<<-1;
	cout<<endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n;
		cin>>n;
		solution(n);
	}
	return 0;
}
