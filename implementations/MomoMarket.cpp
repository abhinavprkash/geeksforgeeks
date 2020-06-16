#include <bits/stdc++.h>

using namespace std;

int search(lonf arr[], int low, int high, long x){
	if (low>high)
	{
		return -1;
	}
	if (x>=arr[high])
	{
		return high;
	}
	int mid = (high+low)/2;
	if (arr[mid]==x)
	{
		return mid;
	}
	if (mid>0 && arr[mid-1]<=x && x<arr[mid])
	{
		return mid-1;
	}
	if (c<arr[mid])
	{
		return search(arr,low,mid-1,x);
	}
	return search(arr,mid+1, high, x)
}

int main(int argc, char const *argv[])
{
	int  n;
	cin>>n;
	long* arr = new long[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	long* prefix = new long[n];
	prefix[0]=arr[0];
	for (int i = 0; i < n; i++)
	{
		prefix[i] = prefix[i-1]+arr[i];
	}
	int q;cin>>q;
	while(q-->0) {
	    long x;
	    cin>>x;
	    int s = search(prefix, 0, n-1, x);
	    long val =x;
	    if(s!=-1){
	    	val-=prefix[s];
	    }
	    cout<<s+1<<" "<<val<<endl;
	}
}