#include<stdio.h>

#define MAX_SIZE 1000

int sum(int arr[], int n)
{
	int sum = 0;
	int i;

	for(i = 0; i < n ; i++)
	{
		sum = sum + arr[i];
	}

	return sum;
}

int main()
{
	int arr[MAX_SIZE];

	int n,i;

	printf("Enter the number of elements in array\n");
	scanf("%d", &n);

	printf("Enter elements\n");

	for(i=0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("sum of element is %d", sum(arr, n));

	return 0;
}
