#include<iostream>

using namespace std;

class A
{
	int x;
	public:
		A()
		{
			cout << "A 's constructor called" << endl;
		}
};

class B
{
	static A a;
	public:
		B()
		{
			cout << "B's constructor called" << endl;
		}
		
		static A getA()
		{
			return a;
		}
};

A B::a;

int main()
{
	cout << "in main " << endl;
	B b;
	A a = b.getA();
	return 0;
}
	

