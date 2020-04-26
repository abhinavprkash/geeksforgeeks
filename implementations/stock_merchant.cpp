
	#include <bits/stdc++.h>
	
	using namespace std;

	int main()
	{
		std::ios::sync_with_stdio(false);
		int n;
		cin>>n;
		int freq[101] ={0};
		for(auto i=0 ; i<n;i++) {
			int c;
			cin>>c;
			freq[c]++;
		}
		int result =0;
		for (int i = 0; i < 101; ++i)
			result += freq[i]/2;
		cout<<result<<endl;
		
		return 0;
	}
