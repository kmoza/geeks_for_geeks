#include<iostream>

using namespace std;

int main()
{
	try
	{
		try
		{
			throw 20;
		}
		catch(int n)
		{
			cout << "handle partially" << endl;
			throw;
		}
	}
	catch(int n)
	{
		cout << "handle remaining" << n << endl;
	}
	return 0;
}

