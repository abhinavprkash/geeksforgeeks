/Sorting of n numbers in descending order using insertion sort



#include<stdio.h>
#include<conio.h>


void insertion_sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp>a[j]&&j<=n)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}


void printarr(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
}


int main()
{
    int a[size],i,n;
    printf("Enter the number of elements to be entered (LIMIT:100):\n ");
    scanf("%d",&n);
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);                                              
    }
    printf("The elements before sorting are:\n");
    printarr(a,n);                                                   
    printf("The elements after sorting are:\n");
    printarr(a,n);                                                     
    return 0;

}