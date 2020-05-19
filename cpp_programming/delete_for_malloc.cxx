#include<iostream>
#include<cstdlib>

int main()
{
	int *data_ptr = (int*)malloc(sizeof(int));
	*data_ptr = 10;
	delete data_ptr;
	return 0;
}
