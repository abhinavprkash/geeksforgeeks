#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long test, food, stores, people, price, max=INT_MIN;
	cin>>test;
	while(test--) {
	    cin>>food;
	    while(food--) {
	        cin>>stores>>people>>price;
	        long long temp = floor(people/(stores+1));
	        temp*=price;
	        if (temp>max)
	        	max = temp;
	    }
	        cout<<max<<endl;
	        max = INT_MIN;
	}
	return 0;
}