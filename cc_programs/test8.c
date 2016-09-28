//Given an array A[] and a number x, check for pair in A[] with sum as x

#include<stdio.h>

void findpair(int A[], int size, int number)
{
	for(int i = 0; i < size-1; i++)
	{
		for(int j=i+1; j < size; j++)
		{
			if(number == (A[i]+A[j]))
			{
				printf("Found a pair whose sum is %d and the pair is %d and %d\n", number, A[i],A[j]);
				return;
			}
		}
	}

	printf("Unable to find the requested pair");
}

int main()
{
	int A[] = {2,3,56,67,89,34,56,67};
	int number;
	printf("Enter the number to be searched:");
	scanf("%d", &number);
	findpair(A, sizeof(A)/sizeof(A[0]), number);
	return 0;
}

		
