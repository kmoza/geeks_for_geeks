//float to string conversion


#include<stdio.h>

void x_ftoa(double num, char* str, int d_num);

int main()
{
	double num = 10.234567;
	char str[10];
	x_ftoa(num,str,2);
	printf("The number returned is %s\n", str);
	return 0;
}

void x_ftoa(double
