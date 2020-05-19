//binary search

#include <stdio.h>

int bsearch(int arr[],int,int);

int main()
{
	int arr[] = {4,5,6,7,8,9,10,11};
	int found = bsearch(arr,sizeof(arr)/sizeof(arr[0]),11);
	
	if(found == -1)
	{
		printf("\nelement not found");
	}
	else
	{
		printf("\nelement found at index %d",found);
	}
	
	return 0;
	
}

int bsearch(int arr[],int arrsize,int elem)
{
	int found = -1;
	if(arr == NULL)
	{
		return found;
	}
	
	int high = arrsize;
	int low = 0;
	int mid = (high + low)/2;
	
	while(mid>0)
	{
		if(arr[mid] == elem)
		{
			found = mid;
			return found;
		}
		else if(arr[mid]>elem)
		{
			high = mid;
		}
		else
		{
			low = mid;
		}
		
		mid = (high+low)/2;
	}
}