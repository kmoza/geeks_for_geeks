#include<stdio.h>

int round_off(int);

int main()
{
	double num;
	scanf("%f",&num);
	printf("rounded num = %d\n",round_off(num));
	return 0;
}

int round_off(int num)
{
	return num > 0 ?(int) num + 0.5 : (int)num - 0.5;
}
