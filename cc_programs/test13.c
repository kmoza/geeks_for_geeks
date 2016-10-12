#include<stdio.h>

int main()
{
	int x[4];

	printf("%p\n", (void*)(x));
	printf("%p\n", (void*)(x+1));
	printf("%p\n", (void*) (&x));
	printf("%p\n", (void*)(&x+1));

	return 0;
}
