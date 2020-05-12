#include <bits/stdc++.h>
using namespace std;

#define ll                  long long int
#define nl                  cout<<"\n"
#define np                  nullptr
#define fastio              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define pb push_back
#define si(x)               scanf("%d",&x)
#define sl(x)               scanf("%lld",&x)
#define ss(s)               scanf("%s",s)
#define pi(x)               printf("%d\n",x)
#define pl(x)               printf("%lld\n",x)
#define ps(s)               printf("%s\n",s)

#define decMatrix(r,c)      int **mat;   mat = new int *[r];   for(int i = 0; i <r; i++){ mat[i] = new int[c]; int j=0; fo(j,c) mat[i][j]=0; }
#define ff(i,n)             for(i;i<n;i++)
#define fr(i,n)             for(i; i>=0;i--)
#define ffr(i,j,n)          for(i,j; i<n, j>=0; i++,j--)
#define whltc(tc)           int tc; si(tc); while(tc--)

#define DBmsg(x)            cout<<">"<< x ;
#define DBerror(x)          cout<<"!error"<< "=" << x << endl;
#define DBx(x)              cout << #x << "=" << x << endl;
#define DBx_line(x)         cout<< x <<" ";
#define DBxy(x, y)          cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define DBxyz(x,y,z)        cout << #x << "=" << x << ",\t" << #y << "=" << y << ",\t" << #z << "=" << z << endl;
#define DBxyzw(x,y,z,w)     cout << #x << "=" << x << ",\t" << #y << "=" << y << ",\t" << #z << "=" << z << ",\t" << #w << "=" << w << endl;

#define DBarr(arr,n)        cout<< #arr << "=" ; for(int i=0;i<n;i++) cout<< arr[i] <<" "; cout<< endl;
#define DBarr_rev(arr, n)   cout<< #arr << "=" ; for(int i=n-1;i>=0;i--) cout<< arr[i] <<" "; cout<< endl;
#define DBmat(mat,r,c)      cout<< #mat << "=" << endl;  for(int i=0; i<r; i++){ for(int j=0; j<c;j++)   cout<<mat[i][j]<<" ";   cout<< endl; } cout<<endl;

#define DBvec(vec)          cout<< #vec << "=" ; for(auto ele: vec)  cout<< ele <<" ";  cout<< endl;
#define DBhashmp(map)       cout<< #map << "=" ;  for(auto pair: map) cout<< pair.first<< " " << pair.second << "\n";  cout<< endl;

#define DBsep1()            cout<<"\n_________________________"<<" \n";
#define DBsep2()            cout<<"-------------------------"<<" \n";

//------------------ math macro --------------------------
#define max(a,b)            ((a)>(b)?(a):(b))
#define MIN(a,b)            ((a)<(b)?(a):(b))
#define ABS(a)              ((a)>(0)?(a):-(a))
#define mod                 1000000007
#define prec(x,y)           fixed<<setprecision(y)<<x;

#define                     isKeyExist(hashtbl, key) (hashtbl.find(key)!=hashtbl.end())
#define stlUb(vec, ele)     vector<int>::iterator ub;
    
using namespace std;

void getSetBitPos(vector<int> &set_bit_pos, ll temp){
    ll i=0;
        while(temp){
            if(temp & (1))
                set_bit_pos.pb(i);
            i++;
            temp>>=1;
        }
}

int main(){
    ll x, y, l, r, res, mx, val, temp, i;

    whltc(t){
        mx = INT_MIN;
        sl(x); sl(y); sl(l); sl(r);
        DBxyzw(x,y,l,r)

        vector<int> set_bit_pos;

        //checking setbit pos in x
        getSetBitPos(set_bit_pos, x);
        //checking setbit pos in y
        getSetBitPos(set_bit_pos, y);

        sort(set_bit_pos.begin(), set_bit_pos.end(), greater<int>);

        DBvec(set_bit_pos)


        while(r>=l){
            val = (x&r)*(y&r);
            if(val>mx){
                mx = val;
                res = r;
            }
            r--;
        }
        pl(res);
    }

    return 0;
}