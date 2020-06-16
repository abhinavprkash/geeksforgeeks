#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int grouped, notgrouped;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[n];
	}
	int sum1=0, sum2=0;
	for (int i = 0; i < n/2; i++)
	{
		grouped = (arr[i]+arr[n+i-1])/10;
		notgrouped = (arr[i]+arr[n+i-1])%10;
		cout<<grouped<<" "<<notgrouped<<endl;
	}
	return 0;
}