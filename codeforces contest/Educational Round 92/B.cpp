  
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int k,z;
		cin>>n>>k>>z;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		int sum=0;
		if(z==0)
		{
		
		for(int i=0;i<k+1;i++){
			sum+=A[i];
		
			
		}
		cout<<sum<<endl;
	}
	else
	{
		int j=0;
			while(k--)
			{
				if(j==0)
				{
					sum+=A[0];
					j++;
				}
				else
				{	
					if(z>0)
					{
					
					if(A[j-1]>A[j+1])
					{
						sum+=A[j];
						j--;
						z--;
					}
					else
					{
						
						sum+=A[j];
						j++;
					
					}
				}
				else
				{
					sum+=A[j];
						j++;
				}
				}
			cout<<sum<<endl;
			}
			sum+=A[j];
			cout<<sum<<endl;
			
	}
		
		
	}
}