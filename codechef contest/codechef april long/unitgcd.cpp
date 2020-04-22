
	#include <bits/stdc++.h>
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
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			int n; cin>>n;
			if (n==1)
				cout<<"1\n1 1\n";
			else{
				cout<<n/2<<'\n';
				for (int i = 0; i < n/2; ++i)
				{
					if(i==0){
					if (n==2)
						cout<<2<<' '<<1<<' '<<2;
					else
						cout<<3<<' '<<1<<' '<<2<<' '<<3;
					
				}
				else	{
					int ev = 2*(i+1);
					if (ev+1<=n)
						cout<<2<<' '<<ev<< ' '<<ev+1;
					else
						cout<<1<<' '<<ev;
				}
				cout<<"\n";
			}
		}}
		return 0;
	}
