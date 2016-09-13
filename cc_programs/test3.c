#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;

	int* aptr = &a;
	int* bptr = &b;

	printf("%u\n", aptr);
	printf("%u\n", bptr);

	printf("Adding pointer = %u\n", aptr + bptr);

	printf("Subtracting Pointer = %u\n", aptr - bptr);

	return 0;
}
