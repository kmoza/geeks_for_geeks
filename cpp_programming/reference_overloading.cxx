#include<iostream>

int f(int& i)
{
	return i+10;
}

int f(int i)
{
	return i+20;
}

int main()
{
	int a = 10;
	f(a);
	return 0;
}
