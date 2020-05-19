#include<iostream>
#include<cstdlib>

int main()
{
	/*
	int *p = (int*)malloc(sizeof(int));

	int i = 5;

	p = &i;

	delete p;
	*/


	int *p = new int;

	int i = 10;

	p = &i;

	free(p);

	return 0;
}
