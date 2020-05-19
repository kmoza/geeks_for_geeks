#include<stdio.h>

int main()
{
	int var = 10;
	int* ptr = &var;
	printf("ptr = %u\n",*ptr);
	return 0;
}
