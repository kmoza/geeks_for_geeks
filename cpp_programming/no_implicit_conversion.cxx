#include<iostream>

using namespace std;

int main()
{
	try
	{
		throw 'a';
	}
	catch(int x)
	{
		cout << "caught" << x << endl;
	}
	catch(...)
	{
		cout << "default exception" << endl;
	}

	return 0;
}
