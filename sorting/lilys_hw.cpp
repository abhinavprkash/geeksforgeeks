
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
	template <class Compare>
int cycle(pair<int, int>* a, int n, Compare comp) {
    auto result = 0;
    sort(a, a + n, comp);
    vector<bool> visited(n);
    for(auto i = 0; i != n; i++) {
        if(visited[i] || i == a[i].second) {
            continue;
        }
        auto size = 0, current = i;
        while(visited[current] == false) {
            visited[current] = true;
            current = a[current].second;
            size++;
        }
        result += size - 1;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    pair<int, int> a[n];
    for(auto i = 0; cin >> a[i].first; i++) {
        a[i].second = i;
    }
    cout << min(cycle(a, n, greater<pair<int, int>>()), cycle(a, n, less<pair<int, int>>()));
    return 0;
}