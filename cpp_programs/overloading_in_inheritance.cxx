#include<iostream>

class Base
{
	public:
		int f(int i)
		{
			std::cout << "base::f(int)" << std::endl;
			return 0;
		}
};

class Derived : public Base
{
	public:

		//bring the f of base class in the scope of derivedusing the using declaration
		using Base::f;

		double f(double d)
		{
			std::cout << "derived::f(double)" << std::endl;
			return 0;
		}
};


int main()
{
	Derived *dp = new Derived();
	dp->f(10);
	dp->f(10.23);
	return 0;
}
