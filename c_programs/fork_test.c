#include<stdio.h>
#include<stdlib.h>

int main()
{
	pid_t pid = fork();
	if(pid == 0)
	{
		printf("Child Process");
		exit(EXIT_SUCCESS);
	}
	if(pid > 0)
	{
		printf("Parent Process");
	}
	else
	{
		printf("error creating process");
	}

	return 0;
}
