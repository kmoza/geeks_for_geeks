#include<stdio.h>

int x = 50;

int main(void)
{
	int x = 10;

	printf("x = %d\n", x);

	{
		extern int x;
		printf("x = %d\n", x);
	}

	return 0;
}
