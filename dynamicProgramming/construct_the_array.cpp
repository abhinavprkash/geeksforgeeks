
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
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;

	long countArray(int n, int k, int x){
		ll A0 =0,A1 =1, At;
		ll k1 =k-1, k2= k-2;
		for (int i = 1; i < n-1; ++i)
		{
			At = (A0*k2+A1)%mod;
			A1 = (A0*k1)%mod;
			A0  =At;
		}
		ll results;
		if (x==1)
			results = (A0*k1)%mod;
		else
			results = (A0*k2 +A1)%mod;
		return results;
	}

	int main()
	{
		ofstream fout(getenv("OUTPUT_PATH"));

		string nkx_temp;
		getline(cin, nkx_temp);

		vector<string> nkx = split_string(nkx_temp);

		int n = stoi(nkx[0]);
		int k = stoi(nkx[1]);
		int x = stoi(nkx[2]);

		long answer = countArray(n, k, x);

		//long answer = countArray(4, 3, 2); //3
		//long answer = countArray(4, 5, 5); //13
		//long answer = countArray(5, 5, 5); //51
		//long answer = countArray(6, 5, 1); //205
		//long answer = countArray(761, 99, 1); //236568308
		//long answer = countArray(17048, 14319, 1); //803254122

		fout << answer << "\n"; 
		fout.close();

		return 0;
	}

	vector<string> split_string(string input_string) {
		string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
			return x == y and x == ' ';
		});

		input_string.erase(new_end, input_string.end());

		while (input_string[input_string.length() - 1] == ' ') {
			input_string.pop_back();
		}

		vector<string> splits;
		char delimiter = ' ';

		size_t i = 0;
		size_t pos = input_string.find(delimiter);

		while (pos != string::npos) {
			splits.push_back(input_string.substr(i, pos - i));

			i = pos + 1;
			pos = input_string.find(delimiter, i);
		}

		splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

		return splits;
	}