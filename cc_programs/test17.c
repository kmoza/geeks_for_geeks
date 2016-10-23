#include<stdio.h>
#include<stdbool.h>

//basic method
void find_majority_elem(int arr[], int size)
{
	int count[size][2];
	
	//initialize count arr
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			count[i][j] = 0;
		}
	}

	for(int i = 0; i < size; i++)
	{
		for(int k = 0; k < size; k++)
		{
			if(count[k][0] == arr[i])
			{
				i = i+1;
				break;
			}
			else
			{
				count[k][0] = arr[i];
				i = i+1;
				break;
			}
		}
	}


	//search for majority element
	bool found_majority = false;
	int majority_element = 0;

	for(int i = 0; (i < size) && (!found_majority); i++)
	{
		for(int j = 0; (j < size) && (!found_majority); j++)
		{
			if(count[j][0] == arr[i])
			{
				count[j][1] = count[j][1]+1;
				if(count[j][1] >= size/2)
				{
					//time we found the majority element.
					found_majority = true;
					majority_element = count[j][0];
					break;
				}
			}
		}
	}

	if(found_majority)
	{
		printf("Found the majority element = %d\n", majority_element);
	}
	else
	{
		printf("No majority element present in the input array\n");
	}
}

int main()
{
	int arr1[] = {3,3,4,2,4,4,2,4,4};
	find_majority_elem(arr1, sizeof(arr1)/(sizeof(arr1[0])));

	int arr2[] = {3,3,4,2,4,4,2,4};
	find_majority_elem(arr2,sizeof(arr2)/(sizeof(arr2[0])));

	return 0;
}
