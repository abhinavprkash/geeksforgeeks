
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

void solve(){
	ll n,l;
	cin>>n>>l;
	vll arr(n), brr(n);
	for (ll i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (ll i = n-1; i >= 0; --i)
	{
		brr[i] = arr[n-i-1];
	}

	for (int i = 1; i <= n/2; ++i)
	{
		int a = a+ 1;
	}
	for (int i = n; i >= n/2; --i)
	{
		int b = a + 1;
	}

	int sum = abs(a-b)/max(1,b);
	if (sum <= 1000000)
	{
		cout<< a<<endl;
	}
	else{
		cout<<b<<endl;
	}

}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{

	}
	return 0;
}
