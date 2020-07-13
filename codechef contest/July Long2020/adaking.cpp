/*Ada King Problem Code: ADAKING
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
		int arr[9][9];
		for (int i = 1; i <= 8; ++i)
		{
			for (int j = 1; j <= 8; ++j)
			{
				arr[i][j] = -1;
			}
		}
		int n;
		cin>>n;
		int count = 0;
		for (int i = 1; i <= 9; ++i)
		{
			for (int j = 1; j <= 8; ++j)
			{
				arr[i][j] = 1;
				count++;
				if (count == n)
					break;
			}
			if (count == n)
				break;
		}
		cout<<'O';
		for (int i = 1; i <= 8; ++i)
		{
			for (int j = 1; j <= 8; ++j)
			{
				if (!(i==1 &&j==1))
				{
					if(arr[i][j]==(-1))
						cout<<'X';
					else
						cout<<'.';
				}
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}
