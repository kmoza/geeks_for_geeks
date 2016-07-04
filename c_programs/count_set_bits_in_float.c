//count set bits in a floating point single or double precision number
#include<stdio.h>

int count_set_bits(double* num_f);

int main()
{
	float num_f = 1.23;
	double num_d = 2.345;
	printf("number of set bits in 1.23 is %d\n",count_set_bits((double*)&num_f));
	printf("number of set bits in 2.345 is %d\n",count_set_bits(&num_d));
	return 0;
}

int count_set_bits(double* num_f)
{
	//type cast the pointer to char pointer type
	char* temp_num = (char*)num_f;

	//now we know the size of the data or we can get the size of the data i.e. the number of bytes to be processed 
	//to get the set bits
	int num_bytes = sizeof(*num_f);
	
	//print the size
	printf("Number of bytes present in a double bytes = %d\n", num_bytes);

	unsigned int count_set_bits = 0;
	//for each by find the number of bits set.
	while(num_bytes > 0)
	{
		printf("Byte loop = %d\n", num_bytes);

		//find the bits set in this byte
		//update the same using an advanced version of algorithm like Brian Kernighan algortihm
		unsigned int temp_byte_num = *temp_num;
		
		while(temp_byte_num)
		{
			if(temp_byte_num & 1)
			{
				count_set_bits = count_set_bits + 1;
			}

			temp_byte_num = temp_byte_num >> 1;
		}

		temp_num = temp_num + 1;
		num_bytes--;
	}
	return count_set_bits;
}
