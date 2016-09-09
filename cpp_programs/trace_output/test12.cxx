#include<iostream>

using namespace std;

struct C
{
	C()
	{
		cout << "constructor called" << endl;
	}

	C(const C&)
	{
		cout << "copy constructor called" << endl;
	}
};

C f()
{
	return C();
}

int main()
{
	cout << "hello" << endl;
	C obj = f();
	return 0;
}
