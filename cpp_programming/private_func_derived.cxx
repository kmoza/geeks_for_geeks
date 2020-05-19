#include<iostream>

using namespace std;

class Base
{
	public:
		virtual int fun(int i)
		{
			cout << "Base::fun called" << endl;
		}

};

class Derived : public Base
{
	private:
		int fun(int x)
		{
			cout << "Derived::fun called" << endl;
		}
};

int main()
{
	Base *ptr = new Derived;
	ptr->fun(10);
	return 0;
}
