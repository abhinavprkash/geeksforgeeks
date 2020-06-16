#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int b[100005];
int blocksize = 319;
int root[319][100005];

int main() 
{
    int t,q;
    scanf("%d %d",&t,&q);
    
    for(int i = 0; i<t; ++i)
    {
        scanf("%d",&b[i]);
    }
    
    for(int i = 0; i<319; ++i)
    {
        for(int j = 0; j<100005; ++j)
        {
            root[i][j] = 0;
        }
    }
    
    
    for(int i = 0; i<blocksize; ++i)
    {
        for(int j = i*blocksize; j<min(i*blocksize+blocksize,t); ++j)
            root[i][b[j]]++;
            
        for(int j = 99999; j>0; j--)
            root[i][j] = root[i][j] + root[i][j+1];
    }
    
    while(q--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        int count = 0;
        
        for(int i = 0; i<blocksize; i++)
        {
            count = count + root[i][m];
        }
        
        if(count<n)
        {
            printf("-1\n");
            continue;
        }
        
        count = 0;
        int blockspassed = 0;
        while(count + root[blockspassed][m] < n)
        {
            count = count + root[blockspassed][m];
            blockspassed++;
        }
        
        int start = blockspassed*blocksize;
        int ans = 0;
        for(int i = start; i < start + blocksize; i++)
        {
            if(b[i] >= m)
            {
                count++;
                ans = b[i];
            }
            
            if(count == n)
            break;
            
        }
        printf("%d\n",ans);
        
    }
    
	return 0;
}