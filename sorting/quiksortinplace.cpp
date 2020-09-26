
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
int n,a[5001]; 


void swap (int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int partition (int l, int r)
{
    int p = r-1;
    int w = l;
    for (int i=l; i<r; i++) {
        if (a[i] < a[p]) {
            swap (&a[w], &a[i]);
            w++;
        }
    }
    swap (&a[w], &a[p]);
    return w;
}

void quicksort (int l, int r)
{   
    if (r-l <= 1) return;
    
    int p = partition (l, r);
    for (int i=0; i<n; i++)
        printf ("%d ", a[i]);
    printf ("\n");
    
    if (l < r) {
        quicksort (l, p);
        quicksort (p+1, r);
    }
    
}

int main() {

    scanf ("%d", &n);
    for (int i=0; i<n; i++)
        scanf ("%d", &a[i]);
    quicksort (0, n);
    
    return 0;
}