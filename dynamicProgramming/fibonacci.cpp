
#include <bits/stdc++.h>
#define ll long long int



using namespace std;
/*
int fib(int n){
	if (n == 0 || n==1)
		return 1;
	return fib(n-1)+fib(n-2);
}*/

int fib(ll n){
	ll * arr = new ll[n + 1];
	arr[0] = 1;
	arr[1] = 1;
	for (ll i = 2; i <= n ; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	ll output = arr[n];
	return arr[n];
	delete [] arr;
}

int main()
{
	std::ios::sync_with_stdio(false);
	ll n;
	cin>>n;	
	cout<<fib(n)<<endl;
	return 0;
}
