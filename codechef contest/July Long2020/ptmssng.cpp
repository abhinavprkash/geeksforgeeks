/*Missing a Point Problem Code: PTMSSNG
submitted by Abhinav Prakash
username abhinav_526 */


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
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int it,jt;
		int n;
		cin >> n;
		int a, b;
		map<ll, ll> map_1;
		map<ll, ll> map_2;
		n = (4 * n) - 1;
		while (n--) {
			cin >> a >> b;
			if (map_1.find(a) == map_1.end())
			{
				map_1.insert({a, 1});
			}
			else {
				map_1[a]++;
			}
			if (map_2.find(b) == map_2.end()) {
				map_2.insert({b, 1});
			}
			else {
				map_2[b]++;
			}
		}
		for (auto i = map_1.begin(); i != map_1.end(); ++i)
		{
			if((i->s)%2 != 0){
				it = i->first;
				break;
			}
		}
		for (auto i = map_2.begin(); i != map_2.end(); ++i)
		{
			if((i->s)%2 != 0){
				jt = i->first;
				break;
			}
		}
		cout<<it<<" "<<jt<<endl;
	}
	return 0;
}
