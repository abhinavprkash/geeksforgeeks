#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	while(t--) {
	    ll n;
	    cin>>n;
	    vector<int> box(n+4);
	    vector<int> :: iterator min_index;

	    for (ll i = 0; i < n; ++i)
	    {
	    	cin>>box[i];
	    }
	    ll answer =0, r =n-1, min =0;
	    while(r>=0) {
	        min_index  = min_element(box.begin(), box.begin()+r+1);
	        answer += (*min_index-min)*(r+1);
	        min = *min_index;
	        r = min_index-box.begin()-1;
	    }
	    cout<<answer<<endl;
	}
	return 0;
}