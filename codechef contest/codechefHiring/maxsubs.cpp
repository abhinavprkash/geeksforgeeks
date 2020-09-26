
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
#define eb emplace_back
#define f first
#define s second
#define INT_BITS 32 


using namespace std;

ll maxsub(ll *arr, ll n){
	ll index =0;
	for (int i = INT_BITS-1; i >=0; i--)
	{
		int index_max = index;
		int element_max = INT_MIN;
		for (int j = index; j < n; ++j)
		{
			if ((arr[j] & (1<<i))!=0 && arr[j] > element_max)
			{
				element_max = arr[j], index_max = j;
			}
		}
		if (element_max == INT_MIN)
		{
			continue;
		}
		swap(arr[index] , arr[index_max]);
		index_max = index;
		for (int j = 0; j < n; ++j)
		{
			if (j != index_max && (arr[j]& (1<<i))!= 0)
			{
				arr[j] = arr[j]^arr[index_max];
			}
		}
		index++;
	}
	int result = 0;
	for (int i = 0; i < n; ++i)
	{
		result ^= arr[i];
	}
	return result;

}

int main()
{
	std::ios::sync_with_stdio(false);
	ll n;
	cin>>n;
	ll *arr = new ll[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<maxsub(arr, n)<<endl;
	return 0;
}
