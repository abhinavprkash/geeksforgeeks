#include<stdio.h>
#include<stdlib.h>

int search(int *arr,int l,int h,int n,int item)
{
	if(l > h)
    	return item;
	int mid=(l+h)/2;
	if(item < *(arr+mid))
    	return(search(arr,l,mid-1,n,item));
	if(item > *(arr+mid))
    	return(search(arr,mid+1,h,n,item));
	else
    	return(search(arr,0,n-1,n,item * 3));
}


int main()
{
	int n;
	printf("Enter array size.\t");
	scanf("%d",&n);
	int *arr= (int*)malloc(n*sizeof(int));
	printf("Enter array elements.\n");
	for(int i=0;i<n;i++)
    	scanf("%d",arr+i);
    
	int item;
	printf("Enter item to hunt .\t");
	scanf("%d",&item);
    
	item = search(arr,0,n-1,n,item);
	printf("%d\n",item);
	return 0;
}