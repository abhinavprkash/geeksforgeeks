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
#define mod             998244353
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());


int pwmd(int a, int n)
{
	if (!n)
		return 1;
	int pt = pwmd(a, n / 2);
	pt *= pt, pt %= mod;
	if (n & 1)
		pt *= a, pt %= mod;
	return pt;
}

int a = 2, A = 3;

stack<char> oper;
stack<vi> val;

int mul(int a, int b)
{
	a %= mod;
	b %= mod;

	return (a * b) % mod;
}

int modinv_of_2 = pwmd(2, mod - 2);

void operate_once()
{
	vi r = val.top();
	val.pop();

	vi l = val.top();
	val.pop();

	char op = oper.top();
	oper.pop();

	vi res(4);

	switch (op)
	{
	case '&':
		res[0] = mul(l[0], r[1] + r[a] + r[A]) + mul(l[1] + l[a] + l[A], r[0]) + mul(l[0], r[0])
		         + mul(l[a], r[A]) + mul(l[A], r[a]);
		res[1] = mul(l[1], r[1]);
		break;

	case '|':
		res[0] = mul(l[0], r[0]);
		res[1] = mul(l[1], r[0] + r[a] + r[A]) + mul(l[0] + l[a] + l[A], r[1]) + mul(l[1], r[1])
		         + mul(l[a], r[A]) + mul(l[A], r[a]);
		break;

	case '^':
		res[0] = mul(l[0], r[0]) + mul(l[1], r[1]) + mul(l[a], r[a]) + mul(l[A], r[A]);
		res[1] = mul(l[0], r[1]) + mul(l[1], r[0]) + mul(l[a], r[A]) + mul(l[A], r[a]);
		break;
	}

	res[0] %= mod;
	res[1] %= mod;

	int prob_gone = (res[0] + res[1]) % mod;
	int rem_prob = (1 - prob_gone + mod) % mod;

	res[a] = res[A] = mul(rem_prob, modinv_of_2);

	val.push(res);
}

int32_t main()
{
	FIO;

	int one_by_4 = pwmd(4, mod - 2);

	vi equals = {one_by_4, one_by_4, one_by_4, one_by_4};

	w(t)
	{
		string exp; cin >> exp;

		for (char ch : exp)
		{
			if (ch == '#')
				val.push(equals);

			else if (ch == '(')
				continue;

			else if (ch == ')')
				operate_once();

			else
				oper.push(ch);
		}

		vi ans = val.top();
		val.pop();

		cout << ans[0] << ' ' << ans[1] << ' ' << ans[a] << ' ' << ans[A] << '\n';

	}
	return 0;
}