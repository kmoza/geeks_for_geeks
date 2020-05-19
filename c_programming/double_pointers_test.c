#include<stdio.h>

void test1(int* pp)
{
	int myVar = 9999;
	pp = &myVar;
}

void test2(int** pp)
{
	int myVar = 9999;
	*pp = &myVar;
}

int main()
{
	printf("Hej\n");
	int i=1234;
	int* p1;

	p1 = &i;

	test1(p1);
	printf("does not change..., p1=%d\n",*p1);

	test2(&p1);
	printf("changes..., p1=%d\n",*p1);
	return 0;
}
