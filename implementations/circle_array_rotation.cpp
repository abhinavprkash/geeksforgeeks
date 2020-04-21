#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,k,q;
    cin>>n>>k>>q;
    int * array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    k%=n;
    for (int i = 0; i < q; i++)
    {
        int b;
        cin>>b;
        cout << array[(n-k+b)%n] <<endl;
    }
    
    
    return 0;
}
