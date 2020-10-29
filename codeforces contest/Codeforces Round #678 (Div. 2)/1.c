#include<stdio.h>
#include<stdlib.h>
struct date{
    int d,m,y;
};
int gt(struct date d1,struct date d2)
{
    if(d1.y>d2.y)return 1;
    else if(d2.y>d1.y)return 0;
    if(d1.m>d2.m)return 1;
    else if(d2.m>d1.m)return 0;
    if(d1.d>d2.d)return 1;
    return 0;
}
    
    
int main()
{
    int n;
    printf("enter number of dates\n");
    scanf("%d",&n);
    struct date arr=(struct date)malloc(n*sizeof(n));
    int i,j;
    printf("enter dates\n");
    for(i=0;i<n;i++)
    {
    printf("day:");
    scanf("%d",&arr[i].d);
    
    printf("month:");
    scanf("%d",&arr[i].m);
    
    printf("year:");
    scanf("%d",&arr[i].y);
    }
    struct date temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(gt((arr+j),(arr+j+1)))
            {
                temp=*(arr+j);
                (arr+j)=(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d:%d:%d\n",arr[i].d,arr[i].m,arr[i].y);
    }
    return 0;
}