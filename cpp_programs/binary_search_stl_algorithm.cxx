#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[], int arraysize)
{
	for(int i = 0; i < arraysize; i++)
	{
		cout << " " << a[i];
	}
	cout <<  endl;
}

int main()
{
	int a[] = {1,5,8,9,6,7,3,4,2,0};
	int asize = sizeof(a)/sizeof(a[0]);

	cout <<  "array is" << endl;
	show(a,asize);

	cout << "sort the aary for binary search" ;
	sort(a, a+asize);

	show(a, asize);

	cout << "perfrom binary search" << endl;
	if(binary_search(a,a+asize, 2))
	{
		cout << "element found in the array" << endl;
	}
	else
	{
		cout << "element not found in the array" << endl;
	}

	return 0;
}

	
