
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long 
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

class UnionFind
{
private:
    vector<ll> data;
    vector<ll> tree_size;

public:
    UnionFind(ll n)
    {
        data = vector<ll>(n);
        tree_size = vector<ll>(n, 1);
        for (ll i = 0; i < n; ++i)
        {
            data[i] = i;
        }
    }

    ll root(ll a)
    {
        if (data[a] == a) return a;
        else return data[a] = root(data[a]);
    }

    void unite(ll a, ll b)
    {
        ll root_a = root(a);
        ll root_b = root(b);
        if (root_a == root_b)
            return;
        else
        {
            tree_size[root_b] += tree_size[root_a];
            tree_size[root_a] = 0;
            data[root_a] = root_b;
            return;
        }
        return;
    }
    ll get_tree_size(ll a)
    {
        return tree_size[root(a)];
    }
};

int main()
{
	std::ios::sync_with_stdio(false);
	ll N, M;
    cin >> N >> M;
    vll A(M), B(M);
    UnionFind uf = UnionFind(N);
    for(size_t i=0;i<M; i++)
    {
        cin >> A[i] >> B[i];
        uf.unite(A[i]-1, B[i]-1);
    }
    ll max_size=0;
    for(size_t i=0;i<N; i++)
    {
        max_size = max(max_size, (uf.get_tree_size(i)));
    }
    cout << max_size << endl;
	return 0;
}
