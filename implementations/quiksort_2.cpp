
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
int partition(vector <int>&  ar, int l ,int r) {
    vector<int> tmp(ar.size());
    int k = 0;
    int j = l;
    int key = ar[l];
    for(int i = l; i < r; ++i){
        if(ar[i] < key)
            ar[j++] = ar[i];
        else
            tmp[k++] = ar[i];
    }
    for(int i = 0;i < k; ++i){
        ar[j + i] = tmp[i];
    }
    return j;
}
void quickSort(vector <int>&  ar,int start, int ar_size) {
    if(ar_size <= 1)
        return;
    int p = partition(ar, start, start + ar_size);
    quickSort(ar, start, p - start);
    quickSort(ar, p + 1, ar_size - (p - start) -1);
    cout << ar[start];
    for(int i = start + 1; i < start + ar_size; ++i)
        cout << " " << ar[i];
    cout << endl;

}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
   for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
       int _ar_tmp;
       cin >> _ar_tmp;
       _ar.push_back(_ar_tmp); 
    }

    quickSort(_ar, 0, _ar_size);
   
   return 0;
}