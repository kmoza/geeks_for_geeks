//convert a number to string

//using sprintf

#include <stdio.h>

#define MAX 10

int main()
{
	int num = 1234;
	char arr[MAX];
	
	sprintf(arr,"%d", num);
	printf("\nNumber is %s\n", arr);
	return 0;
}