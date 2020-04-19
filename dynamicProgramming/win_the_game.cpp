#include <bits/stdc++.h>
using namespace std;
typedef long double ll;
ll find(ll r, ll g, ll t)
{
    ll ans = r / t;
    if (g > 2)
        ans += ((g / t) * ((g - 1) / (t - 1)) * find(r, g - 2, t - 2));
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {

        ll i, j, k, r, g, c = 0;
        cin >> r >> g;
        j = r + g;
        //printf("%0.6f",k)
        k = find(r, g, j);
        if (r == 0)
            cout << "1.000000"
                 << "\n";
        else
            cout << fixed << setprecision(6) << k;
        cout << "\n";

        t--;
    }
}