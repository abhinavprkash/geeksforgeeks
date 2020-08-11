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

int lis(int * input, int n){
	int * output = new int[n];
	output[0] =1;
	for (int i = 1; i < n; ++i)
	{
		output[i] =1;
		for (int j = i-1; j >= 0; --j)
		{
			if(input[j]> input[i]){
				continue;
			}
			int possibleAns = output[j] +1;
			if (possibleAns>output[i])
			{
				output[i] = possibleAns;
			}
		}
	}
	int best = 0;
	for (int i = 0; i < n; ++i)
	{
		if (best<output[i])
		{
			best = output[i];
		}
	}
	delete[] output;
	return best;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int *input = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>input[i];
	}

	int ans = lis(input, n);
	cout<<ans<<endl;
	delete[] input;
}
