#include<iostream>

class Test
{
	public:
		void f()const
		{
			std::cout << "f() const" << std::endl;
		}

		void f()
		{
			std::cout << "f()" << std::endl;
		}

};

int main()
{
	Test t1;
	t1.f();
	Test const t2;
	t2.f();
	return 0;
}
