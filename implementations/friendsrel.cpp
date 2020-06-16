#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int y;
        cin>>y;
        int x=y*2;
        for(int i=1;i<=y;i++){
            for(int j=1;j<x;j++){
                if(j>=i+1 && j<x-i-1)
                    cout<<"#";
                else
                    cout<<"*";
            }
            cout<<endl;
            
        }
    }
}