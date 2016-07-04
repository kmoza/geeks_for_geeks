//ipv4 address validator using strtok function
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#define MAX_IPv4 17

bool validate_address(char* addr);

int main()
{
	char addr[MAX_IPv4];
	
	//read ipv4 address using string
	printf("Enter ipv4 address to validate:\n");
	scanf("%s",addr);
	printf("The entered address is %s\n",addr);
	
	if(validate_address(addr))
	{
		printf("address %s is a valid ipv4 address\n",addr);
	}
	else
	{
		printf("invaid ipv4 address\n");
	}
	
	return 0;
}

bool validate_address(char* addr)
{

	printf("validating the ip address %s\n",addr);
	
	int dot_counter = 0;	
	
	//tokenize the ipv4 address and validate each octect
	char* data;
	
	data = strtok(addr,".");
	while(data!= NULL)
	{
 
		printf("data = %s\n", data);
		int temp_data = atoi(data);
		if(temp_data >= 0 && temp_data <= 255)
		{
			dot_counter++;
			data = strtok(addr,".");
			continue;
		}
		else
		{
			return false;
		}	
	}

	if( dot_counter == 4 )
	{
		return true;
	}
	else
	{
		return false;
	}
}
