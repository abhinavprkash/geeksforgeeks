#include<bits/stdc++.h> 
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define fo(i,k,n) for(int i=k;i<=n;++i)
#define endl '\n'
string dectobin(ll n){
	string s = "";
	while(n>0){
		s = (char)('0'+n%2) + s;
		n/=2;
	}
	while(16-s.size()){
		s = '0' + s;
	}
	return s;
}
ll bintodec(string s){
	ll p = 0,sum = 0;
	for(ll i=15;i>=0;i--){
		sum+= (s[i]-'0')*pow(2,p);
		p++;
	}
	return sum;
}
void solve(){
	ll n,m,i;
	char type;
	cin>>n>>m>>type;
	string newbin,binary = dectobin(n);
	if(type == 'L'){
		 newbin = binary.substr(m,16-m) + binary.substr(0,m);
	}else{
		 newbin = binary.substr(16-m,m)+binary.substr(0,16-m);
	}
	ll num = bintodec(newbin);
	cout<<num<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll t;
	cin>>t;
	while(t--) solve();
	return 0;
}