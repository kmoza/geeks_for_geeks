#include<stdio.h>
#include<stdlib.h>

void fun(int **p)
{
	int var2 = 50;
	printf("Address of p in fun = %x\n", p);
	*p = (int*)malloc(sizeof(int));
	*p = &var2;
	printf("value in **p = %d\n", **p);
}

int main()
{
	int var = 10;
	int *ptr;
	printf("Address of pointer in main = %x\n", ptr);
	fun(&ptr);
	printf("Address of pointer in main after calling fun = %x\n", ptr);
	printf("Value in ptr = %d\n", *ptr);
	return 0;
}
