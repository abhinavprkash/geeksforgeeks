//B - Minor Change
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


using namespace std;

int minimum_operations(string& A, string& B)
{
	int n = A.length();
	int count =0;
	for (int i = 0; i < n; ++i)
	{
		if (A[i] == B[i])
		{
			continue;
		}
		else{
			count++;
		}
	}
	return count;
} 
int main()
{
	std::ios::sync_with_stdio(false);
	string s, t;
	cin>>s>>t;
	cout<<minimum_operations(s, t)<<endl;
	return 0;
}
