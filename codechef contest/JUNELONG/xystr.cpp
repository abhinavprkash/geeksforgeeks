
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

int get_number_of_couples() {
	string word;
	cin >> word;
	if (word.size() == 1)
		return 0;
	else if (word.size() == 2)
	{
		if (word[0] == word[1])
			return 0;
		else
			return 1;
	}
	int counter = 0;
	for (int i = 0; i < word.size(); ++i)
	{
		if (word[i] == 'x' && word[i + 1] == 'y')
		{
			i += 1;
			counter++;
		}
		else if (word[i] == 'y' && word[i + 1] == 'x')
		{
			i += 1;
			counter++;
		}
	}
	return counter;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		cout << get_number_of_couples() << endl;
	}
	return 0;
}
