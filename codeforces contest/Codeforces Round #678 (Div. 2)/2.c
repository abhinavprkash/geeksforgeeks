/Sorting of n float numbers in ascending order using selection sort

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



//Finding the smallest position

    int Smallest(float number[],int k,int count)
    {
        int pos=k,i;
        float small=number[k];
        for(i=k+1;i<count;i++)
        {
            if(number[i]<small)
            {
                small=number[i];
                pos=i;
            }
        }
        return pos;
    }
   




//Doing the Selection Sort


   void SelectionSort(float number[],int count)
   {
       float temp;
       int k,pos;
       for(k=0;k<count;k++)
        {
            pos=Smallest(number,k,count);
            temp=number[k];
            number[k]=number[pos];
            number[pos]=temp;
         }
    }



//Code for printing the elements


void printarr(float number[],int count)
{
    int i;
    for(i=0;i<count;i++)
    printf(" %f",number[i]);
}






int main()
{
    int count;int i;
    float number[100];
    printf("Enter the number of elements to be entered (LIMIT:100):\n ");
    scanf("%d",&count);
    printf("Enter %d elements: ", count);
    for(i=0;i<count;i++)
    {
        scanf("%f",&number[i]);
    }

    printf("The elements before sorting are:\n");
    printarr(number,count);                             //printing the elements before sort
    SelectionSort(number,count);
    printf("The elements after sorting are:\n");
    printarr(number,count);                             //printing the elements after sort
    
    return 0;
}