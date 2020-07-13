/*Chef and Card Game Problem Code: CRDGAME
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

ll reverse(int n){
	int sum =0;
	while(n){
		sum += n%10;
		n = n/10;
	}
	return sum;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		ll n;
		cin>> n;
		int m =0, c =0;
		while(n--){
			int a,b;
			cin>>a>>b;
			a = reverse(a);
			b = reverse(b);
			if(a>b)
				c++;
			else if(a<b)
				m++;
			else
				c++, m++;
		}
		if (c>m)
		{
			cout<<"0"<<" "<<c<<endl;
		}
		else if (m>c)
		{
			cout<<"1"<<" "<<m<<endl;
		}
		else{
			cout<<"2"<<" "<<m<<endl;
		}
	}
	return 0;
}
