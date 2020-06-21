
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
	

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T,N;
    int ok=0;
    vector <long int> vec;
    vector <string> col;
    cin >> T;
    
    for(int i=0;i<T;i++) {
    cin >> N;
        for(int j=0;j<N;j++) {
            long int n;
            cin >> n;
            vec.push_back(n);
            
            
        }
        for(auto c:vec) {
            auto q=sqrt(c);
            if(static_cast<long long>(q)%(1)==0&&static_cast<long long>(q)>=0) 
            ok++;
        
        }
        if(static_cast<unsigned long int>(ok)==vec.size())
            col.push_back("Yes");
        else
            col.push_back("No");
            
    }
 for(auto d:col) {
 cout << d << endl;   
 }
       
    return 0;
}