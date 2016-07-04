#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	for(int i = 0; i < num; i++)
	{
		fork();
		printf("\nHello");
	}
	return 0;
}

