#include<bits/stdc++.h>

using namespace std;
#define INT_BITS 16

int rotateLeft(int num, unsigned int rotation)
{
    rotation %= INT_BITS;

    while (rotation--)
        num = (num << 1) | (1 & (num >> INT_BITS));

    return num;
}

int rotateRight(int num, unsigned int rotation)
{
    rotation %= INT_BITS;

    while (rotation--)
        num = ((num >> 1) & (~(1 << INT_BITS)) | ((num & 1) << INT_BITS));

    return num;
}

int main(int argc, char const *argv[])
{
    int t;cin>>t;
    while(t--){
        
        int n,d;
        char c;
        cin>>n>>d>>c;
        if (c=='L')
        {
            cout<<rotateLeft(n,d);
        }
        if (c=='R')
        {
            cout << rotateRight(n, d);
        }
        cout <<endl;
    }
    return 0;
}
