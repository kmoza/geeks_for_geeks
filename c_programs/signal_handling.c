// a c-program which doesnt terminate when ctrl+c is pressed

#include<stdio.h>
#include<signal.h>


void signal_handler(int sig_num)
{
	signal(SIGINT,signal_handler);
	printf("Ctrl+C cant terminate this program\n");
	fflush(stdout);
}

int main()
{
	signal(SIGINT,signal_handler);
	while(1)
	{
	}
	return 0;
}
