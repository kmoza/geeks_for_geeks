#include<iostream>

using namespace std;

class A
{
	public:
		virtual void fun()
		{
			cout << "A::fun called" << endl;
		}
};

class B : public A
{
	public:
		void fun()
		{
			cout << "B::fun called" << endl;
		}

};

class C : public B
{
	public:
		void fun()
		{
			cout << "C::fun called" << endl;
		}
};

int main()
{
	C c;
	B *b = &c;
	b->fun();
	return 0;
}
