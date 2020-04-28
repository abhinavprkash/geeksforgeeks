#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	while(num--)
	{
	    long long int n,a[100005],i,j,s,k,mp=0,np=0;
	    cin>>n;s=0;k=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    i=0;j=n-1;
	    while(i<=j)
	    {
	        
	        
	        if(s<=k)
	        {
	            s=a[i]+s;
	            i++;mp++;
	        }
	        else if(s>k)
	        {
	            k=a[j]*2+k;
	            j--;np++;
	        }
	    }
	    cout<<mp<<" "<<np<<endl;
	    if(mp>np)
	    {
	        cout<<"Motu"<<endl;
	    }
	    else if(mp<np)
	    {
	        cout<<"Patlu"<<endl;
	    }
	    else if(mp==np)
	    {
	        cout<<"Tie"<<endl;
	    }
	}
}