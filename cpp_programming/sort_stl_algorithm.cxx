#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[])
{
	for(int i = 0; i < 10; i++)
	{
		cout << '\t' << a[i];
	}
	cout << endl;
}

int main()
{
	int a[10] = {1,5,8,9,6,7,3,4,2,0};
	cout <<"array before sorting" << endl;
	show(a);

	sort(a, a+10);

	cout << "array after sorting" << endl;
	show(a);

	return 0;
}
