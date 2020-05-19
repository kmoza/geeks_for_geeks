#include<iostream>

int& fun()
{
	int x = 10;
	return x;
}

int main()
{
	fun() = 30;
	std::cout << fun();
	return 0;
}
