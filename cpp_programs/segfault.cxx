#include<iostream>

void a()
{
	int a;
	int b = 10;
	std::cout << "Function a"<< std::endl;
	int* ptr = NULL;
	std::cout << "Ptr value" << *ptr ;

}


int main()
{
	std::cout << "In main" << std::endl;
	a();
	return 0;
}
