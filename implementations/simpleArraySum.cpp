#include<iostream>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char** argv) {

    int n, sum=0;

    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a; cin>>a;
        sum+=a;
    }
    cout<<sum<<endl;
    return 0;
}