
	#include <bits/stdc++.h>
	
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int k;
		cin>>k;
		for (int i = 0; i < n; ++i)
		{
			if (k==arr[i])
				cout<<i<<endl;
		}
		return 0;
	}
