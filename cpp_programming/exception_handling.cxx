#include<iostream>

using namespace std;

int main()
{
	int x = -1;

	cout << "Before try" << endl;
	try
	{
		cout << "Inside try" << endl;

		if(x<0)
		{
			throw x;
			cout << "After throw nver executed" << endl;
		}
	}
	catch(int x)
	{
		cout << "Exception caught" << x << endl;
	}

	cout << "After cathc will be executed" << endl;
	return 0;
}
