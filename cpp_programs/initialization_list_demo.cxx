#include<iostream>

using namespace std;

class A
{
	private:
		int i;

	public:
		A(int);
};

A::A(int arg)
{
	i = arg;
	cout << "A's constructor called" << endl;

}

class B:A
{
	public:
		B(int);

};

B::B(int x):A(x)
{
	cout << "B's constructor called" << endl;
}

int main()
{
	B obj(10);
	return 0;
}

