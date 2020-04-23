#include <bits/stdc++.h>
using namespace std;

int migratory(int n, vector<int>& t){
	vector<int> count(5,0);
	for (int i = 0; i < n; ++i)
	{
		count[t[i]-1]++;
	}
	int max = -1, type = -1;
	for (int i = 0; i < 5; ++i)
	{
		if (count[i]>max)
		{
			max = count[i];
			type = i+1;
		}
	}
	return type;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int > t(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>t[i];
	}
	cout<<migratory(n, t)<<endl;
	return 0;
}