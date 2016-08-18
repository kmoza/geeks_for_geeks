#include<iostream>

using namespace std;

class Test1
{
	public:
		Test1()
		{
			cout << "constructing an object test1" << endl;
		}
		~Test1()
		{
			cout << "destructing an object test1" << endl;
		}

};

class Test2
{
	public:
		Test2()
		{
			cout << "constructing an object test2" << endl;
			throw 20;
		}

		~Test2()
		{
			cout << "destructing an object test2" << endl;
		}

};


int main()
{
	try
	{
		Test1 t1;
		Test2 t2;
		Test1 t3;
	}
	catch(int i)
	{
		cout << "exception caught" << i << endl;
	}
	return 0;
}
