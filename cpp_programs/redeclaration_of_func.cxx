#include<iostream>

int m(int a,int b)
{
	return a+b;
}

int main()
{
	std::cout << m(1,2) << std::endl;

	//redeclare m function
	int m(int a, int b=10);
	std::cout << m(1) << std::endl;

	int m(int a=20, int b);
	std::cout << m() << std::endl;

	return 0;
}
