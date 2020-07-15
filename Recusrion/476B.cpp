//B. Dreamoon and WiFi


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
	char s1[15], s2[15];
	cin>>s1>>s2;
	int n = strlen(s1);
	int ansPosition = 0;
	for (int i = 0; i < n; ++i)
	{
		ansPosition += (s1[i] == '+'?1:-1);
	}
	int finalPos= 0;
	int moves = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s2[i] == '?')
			moves ++;
		else
			finalPos += (s2[i] =='+'?1:-1);
	}
	int distance = ansPosition - finalPos;
	double answer;
	if ((distance+moves)%2!=0 || moves<abs(distance)) //can't reach the destination no matter how
        answer = 0 ;
	else
	{
		int m = (moves + abs(distance))/2;
		int c = 1;
		for (int i = 0; i < m; ++i)
		{
			c *= moves -i;
		}
		for (int i = 2; i <= m; ++i)
		{
			c /= i;
		}
		answer = (double)c/(1<<moves);
	}
	printf("%.12f\n", answer);
	return 0;
}
