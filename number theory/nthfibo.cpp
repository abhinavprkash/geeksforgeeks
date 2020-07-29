
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

void multiply(int A[2][2], int M[2][2]){
	int fValue = A[0][0]*M[0][0] + A[0][1]*M[1][0];
	int sValue = A[0][0]*M[0][1] + A[0][1]*M[1][1];
	int tValue = A[1][0]*M[0][1] + A[1][1]*M[1][0];
	int lValue = A[1][0]*M[0][1] + A[1][1]*M[1][1];
	A[0][0] = fValue;
	A[0][1] = sValue;
	A[1][0] = tValue;
	A[1][1] = lValue;
}

void power(int A[2][2], int n){
	if (n==0 || n == 1)
	{
		return;
	}
	power(A, n/2);

	multiply(A,A);

	if ((n%2) != 0)
	{
		int M[2][2] = {{1,1},{1,0}};
		multiply(A,M);
	}
}

int fib(int n) {
	int A[2][2] = {{1, 1}, {1, 0}};
	if (n == 0)
	{
		return 0;
	}
	power(A, n - 1);
	return A[0][0];

}

int main()
{
	std::ios::sync_with_stdio(false);
	cout << fib(8) << endl;
	return 0;
}
