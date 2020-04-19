#include <bits/stdc++.h>
using namespace std;
static bool between(int s, int t, int x)
{
    return x >= s && x <= t;
}

int main(int argc, char const *argv[])
{
    int s, t;
    cin>>s>>t;
    int a;
    cin>>a;
    int o;
    cin>>o;
    int n, m;
    cin>>m>>n;
    int temp;
    int apple_count =0, orange_count =0;
    while (m-->0)
    {
        cin>>temp;
        apple_count += between(s, t, temp+a);
    }
    while (n-->0)
    {
        cin>>temp;
        orange_count += between(s, t, temp+o);
    }
    cout<<apple_count<<endl;
    cout << orange_count << endl;
    return 0;
}
