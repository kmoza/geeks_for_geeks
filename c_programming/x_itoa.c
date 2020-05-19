// implementation of itoa function

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* x_itoa(int num,char* buffer, int base);

int main()
{
	int num = 1234;
		
	//as of implementing for the 
	char* num_str = (char*)malloc(300);
	num_str = x_itoa(num,num_str,10);
	printf("number comverted in string format is %s\n", num_str);
	return 0;
}

char* x_itoa(int num, char* buffer,int base)
{
	//find the digits of the number
	char* temp_buffer = buffer;
	while(num != 0)
	{
		*buffer = num%10+'0';
		num = num / 10;
		buffer++;
	}

	*buffer = '\0';

	//print the number in reverse order
	printf("number before reversing is %s\n",temp_buffer);

	//now reverse the number 
	int buffer_len = strlen(temp_buffer);
	for(int i = 0; i < buffer_len-1; i++,buffer_len--)
	{
		//swap the data
		char temp_char = *(temp_buffer + i);
		printf("char is = %c\n",temp_char);
		*(temp_buffer + i) = *(temp_buffer + buffer_len - 1);
		printf("char rev is %c\n",*(temp_buffer + buffer_len - 1));
		*(temp_buffer +  buffer_len - 1) = temp_char;

	}
	//print the buffer in function
	printf("in function buffer =%s and temp_buffer is %s\n",buffer,temp_buffer);
	return temp_buffer;
}
