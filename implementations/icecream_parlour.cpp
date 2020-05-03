
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
	void call(vector<int>ar,int N,int M){
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            if(ar[i] + ar[j] == M){
                cout << i+1 << " " << j+1 << endl;
                return;
            }
        }
    }
}
int main() {
    int T,M,N,a;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> M >> N;
        vector<int>ar;
        for(int i = 0; i < N; i++){
            cin >> a;
            ar.push_back(a);
        }
        call(ar,N,M);
    }
    return 0;
}