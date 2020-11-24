
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

vi height;


int solve_1(int left,int right)
{
    int i,count,j,max_1,max_1_count;
    if(left==right) return 1;
    for(i=left;i<right;i++)
    {
        count=1;
        max_1=height[i];
        for(j=i+1;j<=right;j++)
        {
            if(height[j]>max_1) 
            {
                max_1=height[j];
                count++;
            }
        }
        if(count==(right-left+1)) return count;
        else if(i==left) max_1_count=count;
        else
        {
            if(count>max_1_count) max_1_count=count;
        }
        
    }
    
    return max_1_count;
}


int arr_1[1007][1007] = {0};
void  solve(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int me = arr[i];
		int count = 1;
		arr_1[i][i] = count ;
		for (int j = i + 1; j < n; j++)
		{
			if (me <  arr[j])
			{
				me = arr[j];
				count = count + 1;
			}
			arr_1[i][j] = count;
		}
	}
}
int ansCal(int left, int right)
{
	int ans = INT_MIN;
	for (int i = left; i <= right; i++)
	{
		ans = max(arr_1[i][right], ans);
	}
	return ans;
}
int main()
{
	int  n, q, s;
	cin >> n >> q >> s;
	int  arr[n];
	for (ll i = 0; i < n; i++)
		cin >> arr[i];
	int  prev = 0;
	solve(arr , n );
	for (ll i = 0; i < q; i++)
	{
		int  x, y;
		cin >> x >> y;
		int  left = (x + s * prev - 1) % n + 1;
		int  right = (y + s * prev - 1) % n + 1;
		if (left > right)
			swap(left, right);
		prev = ansCal(left - 1, right - 1);
		cout << prev << "\n";
	}
	return 0;
}
