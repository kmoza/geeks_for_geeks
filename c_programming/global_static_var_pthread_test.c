#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int global_var = 100;

void* thread_func(void* data)
{
	
	//update the thread function argument
	printf("Thread argument = %d\n",(int*)data);
	
	//implementation
	static int static_var = 200;
	
	//thread modify the gloabla and static variables
	//modify the global data
	global_var++;
	printf("Global variable = %d\n",global_var);
	
	//update static variable
	static_var++;
	printf("Static variable = %d\n",static_var);
}

int main()
{
	pthread_t thread_id;
	for(int i = 0; i < 3; i++)
	{
		pthread_create(&thread_id,NULL,thread_func,(void*)&i);
	}

	pthread_exit(NULL);
	return 0;	
}
