#include<iostream>

using namespace std;

class A
{
	int x;

	public:
		A()
		{
			cout << "A() " << endl;
		}

};

class B : virtual public A
{
	int y;

	public:
		B()
		{
			cout << "B() " << endl;
		}
};

class C : public A
{
	int z;

	public:
		C()
		{
			cout << "C() " << endl;
		}
};

class D1 : public B , public C
{
	int j;

	public:
		D1()
		{
			cout << "D1() " << endl;
		}
};

class D2 : public C, public B
{
	int k;

	public:
		D2()
		{
			cout << "D2() " << endl;
		}
};

int main()
{
	D1 d1;
	D2 d2;
	return 0;
}
