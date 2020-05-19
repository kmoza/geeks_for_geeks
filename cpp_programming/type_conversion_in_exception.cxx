#include<iostream>

using namespace std;

class MyExcept1
{
};

class MyExcept2
{
	public:
		MyExcept2(const MyExcept1 &e)
		{
			cout << "conversion constructor called" << endl;
		}

};

int main()
{
	try
	{
		MyExcept1 myexp1;
		throw myexp1;
	}
	catch(MyExcept2 e2)
	{
		cout << "caught myexcept2" << endl;
	}
	catch(...)
	{
		cout << "default catch block" << endl;
	}
	return 0;
}
