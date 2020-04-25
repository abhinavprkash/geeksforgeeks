#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int val;
	cin>>val;
	int sum =0;
	sum+=val/10;
	sum+=(val%10)/5;
	sum+=((val%10)%5);
	cout<<sum<<endl;
	return 0;
}