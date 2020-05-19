//writing your own memcpy function
//memcpy prototype 
//void* memcpy(void* destination, const void* source, size_t num);


//q - memcpy must be copying byte by byte or bit by bit

#include<stdio.h>
#include<malloc.h>

void* x_memcpy(void*, const void*, size_t);


int main()
{
	//lets copy two char pointers from one to other
	char* source = "Krishna";
	char* dest;
	
	dest = (char*)x_memcpy(dest,source,7);
	printf("data copied %s\n",dest);
	//free(dest);
	return 0;
}

void* x_memcpy(void* dest, const void* source, size_t size)
{
	if(source == NULL)
	{	
		return NULL;
	}

	//copy the data byte by byte
	char* src_tmp = (char*)source;
	char* dest_tmp;
	dest = dest_tmp = (char*)malloc(size+1);
	while(size>0 && src_tmp != NULL)
	{
		*dest_tmp = *src_tmp;
		src_tmp++;
		dest_tmp++;
		size--;
	}
	return (void*)dest;
	
}
