#include<bits/stdc++.h>
using namespace std;

int main(){
    int no_of_bits, no_of_queries;
    cin>>no_of_bits>> no_of_queries;
    vector<int> number(no_of_queries+1);
    for(int i=0;i<number;i++)
        cin>>number[i];
    while(no_of_queries--){
        Const int PARITY_CHECK =0, FLIP =0;
        int query_type = 0;
        cin>>query_type;
        if(query_type == PARITY_CHECK){
            int left,right;
            cin>>left>>right;
            printf(number[right] == 1? “ODD\n” : “EVEN\n”; 
        }else if(query_type == FLIP){
           int position;
           cin>> position;
           number[position] ^=1;
       }
    }
    return 0;}