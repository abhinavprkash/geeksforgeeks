#include <bits/stdc++.h>
	
using namespace std;

int main(int argc, char const *argv[])
{
	int n,count=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%3 ==0){
			count++;
		}
	}
	if(count ==0){
		cout<<"Nothing Here!";
	}else{
		cout<<count<<endl;
		for(int i=0;i<n;i++){
			if(arr[i]%3==0){
				cout<<i+1<<" ";
			}
		}
	}
	return 0;
}