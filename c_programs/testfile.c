//Testfile.c
#include <stdio.h>

void findsum(int);

int main()
{
	int num = 234;
	findsum(num);
	return 0;
}

void findsum(int num)
{
	int sum = 0;
	while(num)
	{
		sum = sum + num%10;
		num = num/10;
	}
	sizeof(int);
	printf("\nSum of digits of number is %d",sum);
}

