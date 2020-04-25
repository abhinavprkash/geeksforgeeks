#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(abs(a-c)>abs(b-c))
			cout<<"Cat B"<<endl;
		else if (abs(b-c)>abs(a-c))
			cout<<"Cat A"<<endl;
		else
			cout<<"Mouse C"<<endl;
	}
	return 0;
}