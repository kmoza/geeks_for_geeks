#include<iostream>

using namespace std;

class Test
{
	public:
		Test()
		{
			cout << "constructor of test" << endl;
		}
		~Test()
		{
			cout << "destrcutor of test" << endl;
		}
};

int main()
{
	try
	{
		Test t1;
		throw 10;
	}
	catch(int i)
	{
		cout << "caught" << i << endl;
	}
	return 0;
}
