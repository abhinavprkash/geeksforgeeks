
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

int board[11][11];

bool isPossible(int n, int row, int column){
	//same column
	for (int i = row-1; i >= 0; --i)
	{
		if (board[i][column] == 1)
		{
			return false;
		}
	}
//uppr left diagonal
	for (int i = row -1, j = column-1; i >= 0 && j >=0; i--, j--)
	{
		if (board[i][j]==1)
		{
			return false;
		}
	}
	// uppper right diagonal
	for (int i = row -1, j = column+1; i >= 0 && j < n; i--, j++)
	{
		if (board[i][j]==1)
		{
			return false;
		}
	}
	return true;
}

void nQueenHelper(int n, int row){
	if (row == n)
	{
		//We have reached some solution

		//Print the Board Matrix

		//return

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout<< board[i][j] << " ";
			}
		}
		cout<<endl;
		return;
	}

	//place at all possible positions and move to smaller problems
	for (int j = 0; j < n; ++j)
	{
		if(isPossible(n, row, j)){
			board[row][j] = 1;
			nQueenHelper(n, row+1);
			board[row][j] = 0;
		}
	}
	return;
}

void placeNQueens(int n){
	memset(board, 0, 11*11*sizeof(int));

	nQueenHelper(n,0);
}


