#include<bits/stdc++.h>

using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());


int32_t main()
{
	FIO;
	w(t)
	{
		int n; cin >> n;
		mk(arr, n, int);

		int st = 0, en = n - 1;

		for (int i = 0; i < n; ++i)
			cin >> arr[i];

		int moves = 0;
		int turn = 0;
		int lst[2] = {};
		int tot[2] = {};

		while (st <= en)
		{
			int cur = 0;

			if (turn == 0)
			{
				bool done = 0;
				for (int i = st; i <= en; ++i)
					if (cur > lst[1])
					{
						st = i;
						done = 1;
						break;
					}
					else
						cur += arr[i];

				if (!done)
					st = en + 1;
			}

			else
			{
				bool done = 0;
				for (int i = en; i >= st; --i)
					if (cur > lst[0])
					{
						en = i;
						done = 1;
						break;
					}
					else
						cur += arr[i];

				if (!done)
					en = st - 1;
			}

			tot[turn] += cur;
			lst[turn] = cur;
			moves++;
			turn = 1 - turn;
		}

		cout << moves << ' ' << tot[0] << ' ' << tot[1] << '\n';
	}
	return 0;
}