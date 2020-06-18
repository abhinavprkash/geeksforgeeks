
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

void update(int index, int value, int* BIT, int n){\
	for (; index <= n; index += index&(-index))
	{
		BIT[index] += value;
	}
}

int query(int index, int* BIT){
	int sum = 0;
	for (; index > 0; index -= index&(-index))
	{
		sum += BIT[index];
	}
	return sum;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;

	int *arr = new int[n+1]();
	int *BIT = new int[n+1]();
	for (int i = 1; i <=n; ++i)
	{
		cin>>arr[i];
		update(i, arr[i],BIT, n);

	}
	cout<<"Sum of first 5 element"<<query(5, BIT)<<endl;
	cout<<"Sum of element of 2 index to 6 index "<<query(6, BIT) - query(1, BIT)<<endl;

	return 0;
}
