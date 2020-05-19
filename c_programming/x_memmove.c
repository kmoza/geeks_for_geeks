//memmove implementation

#include<stdio.h>
#include<malloc.h>
#include<string.h>

void* x_memmove(void* , void* , size_t);

int main()
{
	char source[100] = "Krishna";
	printf("after moving the data around %s\n", (char*)(x_memmove(source+4, source, strlen(source)+1)));
	return 0;
}

void* x_memmove(void* destination, void * source, size_t size)
{
	char* tmp_source = (char*) malloc(size);
	strcpy(tmp_source,source);
	
	//cast the destination to char*
	//(char*)destination;

	//copy the data to the destination from the temporary directory
	while(size>0)
	{	
		*(char*)destination = *tmp_source;
		destination++;
		tmp_source++;
		size--;
	}

	return (void*)source;
}
