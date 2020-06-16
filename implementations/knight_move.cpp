#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int sum =0;
	if(s[0]=='A'){
		s[0]=10;
		int a = stoi(s);
		while (a != 0) 
    { 
     sum = sum + a % 10; 
     a = a/10; 
    }}
    if(sum%2!=0){
    	cout<<"0";
    }  
    else if(sum/2==0){
    	cout<<"1";
    }
	

}