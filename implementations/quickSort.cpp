#include<iostream>

using namespace std;

void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i =low-1;
    for (int j = low; j  <=high-1; j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
        
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void _quicksort(int arr[], int start, int end){
    if (start<end)
    {
        int pi = partition(arr, start, end);
        _quicksort(arr, start, pi-1);
        _quicksort(arr, pi+1, end);
    }
    
}
void quickSort(int arr[], int size){
    _quicksort(arr, 0, size-1);
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    quickSort(input, n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
}
