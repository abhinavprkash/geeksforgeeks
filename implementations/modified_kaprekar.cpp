#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

bool isKaprekar(ll n)
{
    ll sq = pow(n, 2), temp = sq, d = 0;
    while (temp)
    {
        temp /= 10;
        d++;
    }
    // 3 / 2 = ceil(1.5) = 2
    d = ceil((float)d / 2);
    ll left = sq / pow(10, d);
    // 2025, left = 2025/100, right = 2025 - 2000
    ll right = sq - left * pow(10, d);
    return left + right == n;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll p, q, count = 0;
    cin >> p >> q;
    for (ll n = p; n <= q; n++)
    {
        if (isKaprekar(n))
        {
            count++;
            cout << n << " ";
        }
    }
    if (!count)
        cout << "INVALID RANGE";
    return 0;
}