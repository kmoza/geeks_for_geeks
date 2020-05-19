#include<iostream>

class Base
{
	public:
		virtual ~Base() = 0;
};

Base::~Base()
{
	std::cout << "pure virtual destructor" << std::endl;
}

class Derived : public  Base
{
	public:
		~Derived()
		{
			std::cout << "~Derived() is executed" <<std::endl;
		}
};

int main()
{
	Base *b = new Derived();
	delete b;
	return 0;
}
