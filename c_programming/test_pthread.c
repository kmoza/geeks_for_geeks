#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


void* my_func(void* temp)
{
	printf("Thread execution\n");	
}

int main()
{
	pthread_t thread_id;
	printf("Before thread creation\n");
	//create thread
	pthread_create(&thread_id,NULL,my_func,NULL);
	pthread_join(thread_id,NULL);
	printf("After creating thread\n");
	exit(0);
}
