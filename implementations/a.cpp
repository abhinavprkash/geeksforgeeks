
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
void solve() {
	int a, b, c;
    cin >> a >> b >> c;
    if(c == 0) {
        while(true) {
            if(a <= 0) {
                cout<<"Aoki"<<endl;
                return;
            }
            a--;
            if(b <= 0) {
                cout<<"Takahashi"<<endl;
                return;
            }
            b--;
        }
    }
    while(true) {
        if(b <= 0) {
            cout<<"Takahashi"<<endl;
            return;
        }
        b--;
        if(a <= 0) {
            cout<<"Aoki"<<endl;
            return;
        }
        a--;
    }
}

int main() {
    solve() ;
}
