#include <bits/stdc++.h>
using namespace std;


  
// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      if((((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))){
      cout<<"yes"<<endl;}
      else
      {
        cout<<"No"<<endl;
      }
            
    }
    return 0; 
} 