
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
#define vpl vector<pair<ll ,ll>>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;


pll max_pairing(pii a, pii b)
{

	if (a.f == -1)
	{
		return b;
	}
	else if (b.f == -1)
	{
		return a;
	}
	if (a.s > b.s)
	{
		return a;
	}
	return b;
}

void build(vll &arr, vpl &tree, ll left, ll right, ll position) {
	if (left == right)
	{
		tree[position] = {left, arr[left]};
		return;
	}
	ll mid = left + (right - left) / 2;
	build(arr, tree, left, mid, 2 * position + 1);
	build(arr, tree, mid + 1, right, 2 * position + 2);
	tree[position] = max_pairing(tree[2 * position + 1], tree[2 * position + 2]);
}

pll max(ll left, ll right, vpl &tree, ll low, ll high, ll position);

pll maximum(vpl &tree, ll left, ll right, ll low, ll high, ll position);

int main()
{
	std::ios::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	vll height_den;
	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin >> x;
		height_den.push_back(x);
	}
	vll t;
	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin >> x;
		t.push_back(x);
	}
	vpl tree;
	for (int i = 0; i < 2 * n; ++i)
	{
		tree.push_back({ -1, INT_MIN});
	}

	build(height_den, tree, 0, n - 1, 0);

	while (q--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1){
			t[b - 1] = c;
		}
		else {
			long long int source = b - 1;
			long long int destroy = c - 1;
			bool flag = true;
			if (source == destroy){
				cout << t[source] << "\n";
				continue;
			}

			if (height_den[source] <= height_den[destroy])
			{
				cout << -1 << "\n";
				continue;
			}
			int directory = (destroy - source) / abs(destroy - source);
			ll current = source;
			ll next;
			ll t_t = t[source];

			while (current != destroy) {
				pll Npeak = maximum(tree, current + directory, destroy, 0, n - 1, 0);
				if (Npeak.second > height_den[current])
				{
					t_t = -1;
					break;
				}
				else if (Npeak.second == height_den[current])
				{
					if (current == source)
					{
						t_t = -1;
						break;
					}
					t_t -= t[current];
				}
				t_t += t[Npeak.first];
				current = Npeak.first;
			}
			cout << t_t << "\n";

		}
	}
	return 0;
}
pll max(ll left, ll right, vpl &tree, ll low, ll high, ll position) {
	if (left <= low && right >= high)
	{
		return tree[position];
	}
	if (left > high || right < low)
	{
		return { -1, INT_MIN};
	}
	int mid = low + (high - low) / 2;
	return max_pairing(max(left, right, tree, low, mid , position * 2 + 1), max(left, right, tree, mid + 1, high, position * 2 + 2));
}

pll maximum(vpl &tree, ll left, ll right, ll low, ll high, ll position) {
	if (left > right)
	{
		ll temp = left;
		left = right;
		right = temp;
	}
	return max(left, right, tree, low, high, position);
}