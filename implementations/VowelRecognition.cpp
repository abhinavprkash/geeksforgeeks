#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

ll vowel_cal(string s)
{
	ll n = s.length();
	vector<long> arr;
	for (ll i = 0; i < n; i++)
	{
		if (i == 0)
			arr.push_back(n);
		else
			arr.push_back((n - i) + arr[i - 1] - i);
	}
	ll sum = 0;
	for (ll i = 0; i < n; i++)
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
			sum += arr[i];

	return sum;
}
int main(int argc, char const *argv[])
{
	ll test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string s;
		cin >> s;
		cout << vowel_cal(s) << endl;
	}
	return 0;
}