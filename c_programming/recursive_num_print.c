#include<stdio.h>

void print_num(int);

int main()
{
	int num;
	scanf("%d",&num);
	print_num(num);

	return 0;
}


void print_num(int num)
{
	printf("\n%d",num);
	if(num > 0)
		print_num(num-1);
}
