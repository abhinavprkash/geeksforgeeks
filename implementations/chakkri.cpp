#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int* arr = new int[n];
	int min_index=0, max_profit = 0;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int x=1
	while(x<n) {
	    if(arr[x]<arr[min_index]){
	    	min_index=x;
	    }
	    int cp =arr[i]-arr[min_index];
	    if (cp>max_profit)
	    {
	    	max_profit = cp;
	    }
	    x++;
	}
	cout<<max_profit;
	return 0;
}