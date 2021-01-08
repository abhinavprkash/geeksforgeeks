#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int left[n + 5];
	int right[n + 5];
	int velocity[n + 5];
	int i;
	for (i = 0; i < n; i++)
	{
		cin >> left[i] >> right[i] >> velocity[i];
	}
	ll int co = 0, f = 0;
	for (i = 0; i < n; i++)
	{
		co = 0;
		ll int ptx = left[i], pty = right[i]; //velpt=vel[i],j;
		for (int j = 0; j < n; j++)
		{
			/*if(j==i)
				continue;
			else
			{
				if(right[j]<ptx || left[j] >pty);
				else
				{
					//cout << j << ' ';
					if(vel[j]==velpt)
						co++;
				}
			}
			if(co>1)
				f=1;*/
			//corner case miss ho rha hai negative me bhi ja skta hai yeh dhyaan do
			if (left[j] <= pty && right[j] >= ptx && velocity[i] == velocity[j])
			{
				co++;
				ptx = left[j] > ptx ? left[j] : ptx;
				pty = right[j] < pty ? right[j] : pty;
			}
			if (co >= 3)
			{
				cout << "NO" << endl;
				return;
			}
		}
		//cout << "co=" << co << "j=" << j  << endl;
	}
	cout << "YES" << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}