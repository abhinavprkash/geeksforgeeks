
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	int H, W;

    cin>>H>>W;

    int a[H][W];
    int min = 101;

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin>>a[i][j];

            if(min > a[i][j]){ min= a[i][j]; }
        }
    }

    int sum = 0;

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            sum += a[i][j] - min;
        }
    }

    cout<<sum<<endl;
}
