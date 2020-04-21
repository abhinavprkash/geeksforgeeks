#include <bits/stdc++.h>

using namespace std;


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        int temp = n, cnt =0;
        while (temp!=0)
        {
            int r = temp%10;
            if (r!=0 && n%r ==0)
                cnt++;
                temp/=10;
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}
