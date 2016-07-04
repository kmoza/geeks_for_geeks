#include<stdio.h>

int main()
{
	unsigned int i = 1;
	if((char*)&i)
	{
		printf("little endian\n");
	}
	else
	{
		printf("big endian\n");
	}
	return 0;
}
