#include<iostream>

using namespace std;

class Base
{
};


class Derived : public Base
{
};

int main()
{
	Derived d;

	try
	{
		throw d;
	}
	catch(Base b)
	{
		cout << "caught base exception" << endl;
	}
	catch(Derived d)
	{
		cout << "caught derived exception" << endl;
	}

	return 0;
}
