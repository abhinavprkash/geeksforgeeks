#include<stdio.h>

int main() {
	int n;
	printf("Enter size of the array\n");
	scanf("%d", &n);
	int arr[n];
	int i;
	printf("Enter the elements of the array\n");
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be searched\n");
	int s;
	scanf("%d", &s);
	for (i = 0; i < n; ++i)
	{
		if (arr[i] == s)
		{
			break;
		}
	}
	if (i < n)
	{
		printf("element found at %d position\n", i);
	}
	else {
		printf("No element exist\n");
	}
	return 0;

}

    