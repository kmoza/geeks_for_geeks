#include<iostream>

//extern "C"
{

	int printf(const char* format,...);
}

int foo(void)
{
	std::cout << "f(void)\n";
	return 0;
}

int foo(int)
{
	std::cout << "f(int)\n";
	return 0;
}


int main()
{
	foo();
	foo(10);
	printf("Calling printf function\n");
	return 0;
}
