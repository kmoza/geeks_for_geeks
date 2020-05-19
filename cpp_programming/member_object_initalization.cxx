#include<iostream>

using namespace std;

class A
{
	private:
		int i;

	public:
		A(int i);

};

A::A(int arg)
{
	i = arg;
	cout << "A's constructor called" << endl;
}

class B
{
	private:
		A a;

	public:
		B(int);
};

B::B(int x):a(x)
{
	cout << "B's constructor called" << endl;
}

int main()
{
	B obj(10);
	return 0;
}

