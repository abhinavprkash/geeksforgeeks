#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)

int prime[1000001], arr[100001];

int phi(int n)
{
	int ret = n, i, j, k;
	for (i = 2; i*i <= n; ++i) {
		k = 0;
		if (!(n%i)) {
			while (!(n%i)) {
				n /= i;
			}
			ret /= i;
			ret *= (i-1);
		}
	}
	if (n > 1) {
		ret /= n;
		ret *= (n - 1);
	}
	return ret;
}

void sieve()
{
	int i, j;
	prime[0] = prime[1] = 1;
	for (i = 2; i*i <= 1000000; ++i) {
		if (prime[i] == 0) {
			for (j = i*i; j <= 1000000; j += i) {
				prime[j] = 1;
			}
		}
	}
}

int mulmod(int a, int b, int c)
{
	int ret = 0;
	while (b) {
		if (b&1) {
			ret = (ret + a) % c;
		}
		a = (a + a) % c;
		b >>= 1; 
	}
	return ret;
}

int modulo(int a, int b, int c)
{
	int ans = 1;
	while (b) {
		if (b&1) {
			ans = mulmod(ans, a, c);
		}
		a = mulmod(a, a, c);
		b >>= 1;
	}
	return ans;
}

bool miller(int p)
{
	if (p < 2) return false;
	if (p != 2 && p%2 == 0) return false;

	int a, b, c, s, tmp, mod;
	s = p-1;
	while (!(s&1)) {
		s >>= 1;
	}

	for (int i = 0; i < 25; ++i) {
		a = rand() % (p - 1) + 1;
		tmp = s;
		mod = modulo(a, tmp, p);
		while (mod != 1 && mod != p-1 && tmp != p-1) {
			tmp <<= 1;
			mod = mulmod(mod, mod, p);
		}
		if (mod != p-1 && tmp%2 == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	sieve();
	int n, q, i, j, k, x, y;
	sci(n); sci(q);
	for (i = 1; i <= n; ++i) {
		sci(x);
		x = phi(x);
		if (x <= 1000000 && prime[x] == 0) {
			arr[i] = 1;
		} else if (x > 1000000 && miller(x)) {
			arr[i] = 1;
		}
		arr[i] += arr[i-1];
	}
	while (q--) {
		sci(x); sci(y);
		printf("%d\n", arr[y] - arr[x-1]);
	}

	return 0;
}