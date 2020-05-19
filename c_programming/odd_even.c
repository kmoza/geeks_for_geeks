//print odd or even

#include <stdio.h>

int main()
{
	int num;
	printf("\nEnter a number");
	scanf("%d",&num);
	
	if(num & 1)
	{
		//number is odd
		printf("\nNumber %d is odd",num);
	}
	else
	{
		//number is even
		printf("\nNumber %d is even",num);
	}
	return 0;
}