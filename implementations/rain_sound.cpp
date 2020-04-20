#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int l,r,s;
        cin>>l>>r>>s;
        l = (l-1)/s+1;
        r = r/s;
        if(l>r)
            cout<<"-1 -1"<<endl;
        else
            cout<<l<< " "<<r<<endl;
    }
    return 0;
}
