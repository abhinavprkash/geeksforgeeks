
	#include <bits/stdc++.h>

	#define ll long long int

	
	using namespace std;
	const ll mod =0;
	
	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			ll n;
			bool ok =0;
			cin>>n;
			for (ll k = 2; k <= 40; k++)
			{
				ll temp =(1<<k)-1;
				if (n%temp==0)
				{
					cout<<n/temp<<endl;
					ok=1;
					break;
				}
			}
		}
		return 0;
	}
