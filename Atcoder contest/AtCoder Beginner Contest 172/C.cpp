#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#undef _P
#define _P(...) (void)printf(__VA_ARGS__)
#define FOR(x,to) for(x=0;x<(to);x++)
#define FORR(x,arr) for(auto& x:arr)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
#define ALL(a) (a.begin()),(a.end())
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
//-------------------------------------------------------

int N,M;
ll K;
ll A[202020],B[202020];

void solve() {
	int i,j,k,l,r,x,y; string s;

	cin>>N>>M>>K;
	FOR(i,N) {
		cin>>x;
		A[i+1]=A[i]+x;
	}
	FOR(i,M) {
		cin>>x;
		B[i+1]=B[i]+x;
	}

	int ma=0;
	FOR(i,N+1) if(A[i]<=K) {
		x=lower_bound(B,B+M+1,K-A[i]+1)-B-1;
		ma=max(ma,i+x);
	}
	cout<<ma<<endl;

}


int main(int argc,char** argv){
	string s;int i;
	if(argc==1) ios::sync_with_stdio(false), cin.tie(0);
	FOR(i,argc-1) s+=argv[i+1],s+='\n'; FOR(i,s.size()) ungetc(s[s.size()-1-i],stdin);
	cout.tie(0); solve(); return 0;
}