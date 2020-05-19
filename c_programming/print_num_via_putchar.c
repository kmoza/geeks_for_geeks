//print a number using putchar function call using recursive method

#include<stdio.h>

void print_num(long int);

int main()
{
	long int num = 123456;
	print_num(num);
	return 0;
}

void print_num(long int num)
{
	if(num/10)
	{
		print_num(num/10);
	}
	putchar((num%10)+'0');
}
