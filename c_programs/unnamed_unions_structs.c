#include<stdio.h>

//declare an unnamed struct with unnamed union in it

struct
{
	int a;
	union 
	{
		int b;
	};
	int c;
}foo;


int main()
{

	//assign some value to structure
	foo.a = 10;
	foo.b = 20;
	foo.c = 30;

	//print the struct and union members value
	printf("foo->a = %d\n", foo.a);
	printf("foo->b = %d\n", foo.b);
	printf("foo->c = %d\n", foo.c);

	return 0;
}
