#include<iostream>

using namespace std;

class Base
{
	public:
		int fun()
		{
			cout << "Base::fun() " << endl;
		}

		int fun(int i)
		{
			cout << "Base::fun(int i)" << endl;
		}

};

class Derived : public Base
{
	public:
		int fun(char x)
		{
			cout << "Derived::fun(char)" << endl;
		}

};

int main()
{
	Derived d;
	d.fun();
	return 0;
}
