#include<iostream>

int main(void)
{
	int num = 100;
	void* ptr = &num;
	int* num_ptr = ptr;
	return 0;
}
