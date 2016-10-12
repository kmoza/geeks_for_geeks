#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("In main c program\n");
	printf("calling a python program\n");

	int ret = system("python /home/kmo/Documents/geeks_for_geeks/cc_programs/test.py");

	printf("Python file executing complete = %d\n", ret);
	return 0;
}

