#include<stdio.h>

#define x_sizeof(type) (char*)(&type+1) - (char*)(&type)

//#define x_sizeof(type) (void*)(&type+1) - (void*)(&type)

int main()
{
	int num;
	printf("%d",x_sizeof(num));
	//printf("\nSize of int%d",x_sizeof(int));
	return 0;
}
