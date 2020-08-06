
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
#define pb push_back

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n;
		string s;
		cin>>n>>s;
		vi ans(n);
		vi pos0, pos1;
		for (int i = 0; i < n; ++i)
		{
			int newpos = pos0.size()+ pos1.size();
			if (s[i]=='0')
			{
				if (pos1.empty())
				{
					pos0.pb(newpos);
				}else{
					newpos = pos1.back();
					pos1.pop_back();
					pos0.pb(newpos);
				}
			}else{
				if (pos0.empty()) {
					pos1.pb(newpos);
				} else {
					newpos = pos0.back();
					pos0.pop_back();
					pos1.pb(newpos);
				}
			}
			ans[i] = newpos;
		}
		cout<<pos0.size()+pos1.size()<<endl;
		for(auto it: ans)
			cout<<it+1<<" ";
		cout<<endl;
	}
	return 0;
}
