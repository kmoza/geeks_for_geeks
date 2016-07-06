#include<iostream>

class Base
{
		
	public:
		int data;
	public:
		Base()
		{
		}
};

struct Derived:Base
{
};

int main()
{
	Derived d;
	d.data = 20;
	std::cout << "data set = " << d.data << std::endl;
	return 0;
}
