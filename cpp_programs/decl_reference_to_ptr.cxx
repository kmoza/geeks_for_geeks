#include<iostream>

using namespace std;

int main()
{
	int var = 10;
	int& ref_var = var;
	int* ptr = &var;
	int* &ref_ptr = ptr;
	std::cout << ref_ptr<< endl;
}

