#include<stdio.h>
#include<stdlib.h>

void fun(int *p)
{
	printf("Address of p in fun = %x\n", p);
	p = (int*)malloc(sizeof(int));
	*p = 30;
	printf("Print pointer contents %d\n", *p);
}

int main()
{
	int var = 10;
	int *ptr = &var;
	printf("Address of ptr in main %x\n", ptr);
	fun(ptr);
	printf("Ptr content in main = %d\n", *ptr);
	return 0;
}
