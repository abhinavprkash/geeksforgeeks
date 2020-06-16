#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,i,j,size,x=0,ind, ans=INT_MIN,sum=0;
	cin>>n;
	long long int a[n+1],b[n+2];
	b[0]=0;
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
		b[i] = b[i-1]+a[i];
	}
	for (j = 0; j < n; ++j)
	{
		x=0,sum=0;
		size =2*(n-j+1);
		while((x*(x+1))<=(size)) {
		    x++;
		}
		ind = (x*(x-1))/2+j-1;	
		sum+=b[ind]-b[j-1];
		if (ans<sum)
		{
			ans= sum;
		}
	}
	cout<<ans<<endl;
	return 0;
}