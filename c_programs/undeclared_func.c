#include<stdio.h>

void f();
void g();

int main()
{
	f(2);
	g('a');
	return 0;
}

void f(int x)
{
	printf("%d\n", x);
}

void g(char c)
{
	printf("%c\n", c);
}
