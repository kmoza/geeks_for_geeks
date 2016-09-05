#include<stdio.h>

int* fun()
{
	static int x;
	return &x;
}

int main()
{
	*(fun()) = 10;

	printf("%d\n", *(fun()));

	return 0;
}

