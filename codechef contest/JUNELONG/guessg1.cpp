#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define ss second
#define ff first
#define mp make_pair
#define pii pair<int,int>
#define f(i,x,n) for(ll i=x;i<n;i++)
int flag = 0;//set<ll>s;
void guessG(ll st, ll end)
{
    if (flag == 1)
    {
        return;
    }
    if (st >= end)
    {
        return;
    }
    char a, b, c, d, e, f;
    ll x = (end - st) / 4 + st;
    ll y = 3 * (end - st) / 4 + st;

    cout << x << endl;

    cin >> a;
    if (a == 'E')
    {
        flag = 1;
        return;
    }
    cout << y << endl;
    cin >> b;
    if (b == 'E')
    {
        flag = 1;
        return;
    }
    if (a == 'L' && b == 'L')
    {
        //cout<<y<<" ";
        guessG(st + 1, y - 1);
    }
    else if (a == 'G' && b == 'G')
    {
        guessG(x + 1, end);
    }
    else if (a == 'L' && b == 'G')
    {
        guessG(st + 1, x - 1);
        if (f == 0)
        {
            guessG(y + 1, end);
        }
    }
    else if (a == 'G' && b == 'L')
    {
        ll x2 = (x - st) / 4 + st;
        ll y2 =  3 * (x - st) / 4 + st;
        ll x3 = (end - x) / 4 + x;
        ll y3 =  3 * (end - x) / 4 + x;
        cout << x2 << endl;
        cin >> c;
        if (c == 'E')
        {
            flag = 1;
            return;
        }
        cout << y2 << endl;
        cin >> d;
        if (d == 'E')
        {
            flag = 1;
            return;
        }
        cout << x3 << endl;
        cin >> e;
        if (e == 'E')
        {
            flag = 1;
            return;
        }
        cout << y3 << endl;
        cin >> f;
        if (f == 'E')
        {
            flag = 1;
            return;
        }
        else if (c == 'L' && d == 'L')
        {
            guessG(st + 1, y2 - 1);
        }
        else if (e == 'G' && f == 'G')
        {
            guessG(x3 + 1, end);
        }
        else if (c == 'L' && d == 'G' && e == 'L' && f == 'L')
        {
            guessG(st + 1, x2 - 1);
            guessG(y2 + 1, y3);
        }
        else if (c == 'L' && d == 'G' && e == 'L' && f == 'G')
        {
            guessG(st + 1, x2 - 1);
            guessG(y2 + 1, x3 - 1);
            guessG(y3, end);
        }
        else if (c == 'L' && d == 'G' && e == 'G' && f == 'L')
        {
            guessG(st + 1, x2 - 1);
            guessG(y2 + 1, end);
        }
        else if (c == 'G' && d == 'L' && e == 'L' && f == 'L')
        {
            guessG(st + 1, x3);
        }
        else if (c == 'G' && d == 'L' && e == 'L' && f == 'G')
        {
            guessG(st + 1, x3 - 1);
            guessG(y3 + 1, end);
        }
        else if (c == 'G' && d == 'L' && e == 'G' && f == 'L')
        {
            guessG(st + 1, y2 - 1);
            guessG(x3 + 1, end);
        }
        else if (c == 'G' && d == 'G' && e == 'L' && f == 'L')
        {
            guessG(x2 + 1, y3 - 1);
        }
        else if (c == 'G' && d == 'G' && e == 'L' && f == 'G')
        {
            guessG(x2 + 1, x3 - 1);
            guessG(y3 + 1, end);
        }
        else if (c == 'G' && d == 'G' && e == 'G' && f == 'L')
        {
            guessG(x2 + 1, end);
        }

    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin >> n;
    int st = 0;
    guessG(st, n);
}