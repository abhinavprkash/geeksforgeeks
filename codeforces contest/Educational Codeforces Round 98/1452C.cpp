
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


using namespace std;


void solve() {


	string s;

	cin >> s;

	int l = 0;
	l = s.size();
	int i = 0;

	bool isF[l] = {false};
	bool isS[l] = {false};
	bool isT[l] = {false};
	bool isFo[l] = {false};

	// for (i = 0; i < l; i++) {
	// 	isF[i] = false;
	// 	isS[i] = false;
	// 	isT[i] = false;
	// 	isFo[i] = false;

	// }

	int firstA = 0, firstB = 0, thirdA = 0, thirdB = 0;

	for (i = 0; i < l; i++) {
		if (s[i] == '(') {
			isF[firstA] = true;
			firstA++;
		}
		if (s[i] == ')') {
			if (isF[firstB] == true) {
				isS[firstB] = true;
				firstB++;
			}

		}
		if (s[i] == '[') {
			isT[thirdA] = true;
			thirdA++;
		}
		if (s[i] == ']') {
			if (isT[thirdB] == true) {
				isFo[thirdB] = true;
				thirdB++;
			}
		}
	}


	int maxPosition1 = max(firstA, firstB);
	int maxPosition2 = max(thirdA, thirdB);
	int maxPosition = max(maxPosition1, maxPosition2);


	int minimumMove = 0;

	for (i = 0; i < maxPosition; i++) {
		if (isF[i] == true && isS[i] == true) {
			minimumMove++;
		}
		if (isT[i] == true && isFo[i] == true) {
			minimumMove++;
		}
	}

	cout << minimumMove << endl;

}
int main() {

	int t;


	cin >> t;

	while (t--) {

		solve();
	}

	return 0;
}