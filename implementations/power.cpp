#include<iostream>
using namespace std;

int power(int x, int n){
	if(n!=0)
		return (x*power(x,n-1));
	else 
		return 1;
}
int main(int argc, char const *argv[])
{
	int x, n;
	cin>>x>>n;
	cout<<power(x,n);
	return 0;
}