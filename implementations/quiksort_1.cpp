
#include <bits/stdc++.h>

using namespace std;
void partition(vector <int>  ar) {
   int p=ar[0];
    vector <int> l, r;
    for(int i=0; i<ar.size(); i++) {
        int x=ar[i];
       if (p>ar[i])
        l.push_back(x); 
        else if(p<ar[i])
        r.push_back(x); 
    }
    if(!l.empty()){
    for (int x = 0; x != l.size(); x++)
        cout<<l[x]<<" ";}
        cout<<p<<" ";
     for (int x = 0; x != r.size(); x++)
    cout<<r[x]<<" ";
    
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar);
   
   return 0;
}