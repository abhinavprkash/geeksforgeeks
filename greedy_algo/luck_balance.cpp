
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
	int N, K, L, T;
	cin>>N>>K;
	int luck = 0;
	vector<int> contest;
	for(int i = 0; i < N; i++) {
		cin>>L;
		cin>>T;
		if(T == 0) {
			// Lose all unimportant contests
			luck += L;
		} else {
			contest.push_back(L);
		}
	}
	// Sort important contests descending
	sort(contest.rbegin(), contest.rend());
	while(K > 0 && contest.size() > 0) {
		// Lose as many (of the largest contests) as possible
		luck += contest[0];
		contest.erase(contest.begin());
		K--;
	}
	for(int i = 0; i < contest.size(); i++) {
		// Win the rest
		luck -= contest[i];
	}
	cout<<luck;
    return 0;
}