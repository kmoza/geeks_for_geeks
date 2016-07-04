//measure the time of the function

#include<stdio.h>
#include<time.h>

void func()
{
	for(int i = 0; i < 100000; i++)
	{
		//do nothing
		;
	}
}

int main()
{
	clock_t start_time;
	clock_t end_time;
	
	
	start_time = clock();	
	//call function
	func();
	end_time = clock();
	
	double time_reqd = (end_time - start_time)/CLOCKS_PER_SEC;
	printf("time_reqd = %lf\n",time_reqd);
	printf("Clocks per second = %ld\n", CLOCKS_PER_SEC);
	return 0;
}

