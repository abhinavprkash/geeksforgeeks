
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

struct Rect{
	int x1, y1, x2, y2;
	int area(){
		return (y2-y1)*(x2-x1);
	}

}

int interesect(rect p, rect q){
	int xOverlap = max(0,min(p.x2,q.x2)-max(p.x1,q.x1));
    int yOverlap = max(0,min(p.y2,q.y2)-max(p.y1,q.y1));
    return xOverlap*yOverlap;
}

int main()
{
	std::ios::sync_with_stdio(false);
	Rect a, b, t;  // billboards a, b, and the truck
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
    cout << a.area()+b.area()-intersect(a,t)-intersect(b,t) << endl;
	return 0;
}
