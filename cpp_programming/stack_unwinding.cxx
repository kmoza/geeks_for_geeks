#include<iostream>
using namespace std;

void f1() throw (int)
{
	cout << "f1() start" << endl;
	throw 100;
	cout << "f1() end" << endl;
}

void f2() throw (int)
{
	cout << "f2() start" << endl;
	f1();
	cout << "f2() end" << endl;
}

void f3() 
{
	cout << "f3() start" << endl;
	try
	{
		f2();
	}
	catch(int i)
	{
		cout << "caught exception" << i << endl;
	}
	cout << "f3() end" << endl;
}

int main()
{
	f3();
	return 0;
}
