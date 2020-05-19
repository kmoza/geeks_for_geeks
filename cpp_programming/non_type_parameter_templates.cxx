#include<iostream>

using namespace std;

template <class T, int max>
int arrmin(T arr[], int n)
{
	int m = max;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] < m)
		{
			m = arr[i];
		}
	}
	return m;
}

int main()
{
	int arr1[] = {10,20,15,12};

	int n1 = sizeof(arr1)/sizeof(arr1[0]);

	char arr2[] = {1,2,3};
	int n2 = sizeof(arr2)/sizeof(arr2[0]);

	cout << arrmin<int,1000>(arr1,n1) << endl;
	cout << arrmin<char,256>(arr2,n2);
	return 0;
}
