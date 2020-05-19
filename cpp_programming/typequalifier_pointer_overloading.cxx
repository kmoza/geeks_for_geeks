#include<iostream>

int func(int *x)
{
	return *x+10;
}

int func(int const *x)
{
	return *x+10;
}

int main()
{
	return 0;
}
