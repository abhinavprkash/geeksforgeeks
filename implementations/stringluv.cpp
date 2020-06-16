#include <bits/stdc++.h>
using namespace std;

int main()
{
	int b;
	cin>>b;
	string s;
	cin >> s;
	int a = 0, si = 0, p = 0;
	for (int i = 0; i < b; i++)
	{
		if (s[i] == 'a')
		{
			a++;
		}
		if (s[i] == 's')
		{
			si++;
		}
		if (s[i] == 'p')
		{
			p++;
		}
	}
	cout << a << " " << s << " " << p << endl;
	return 0;
}