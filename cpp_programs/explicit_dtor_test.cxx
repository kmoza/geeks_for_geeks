#include<iostream>

using namespace std;

class Test
{
	public:
		Test()
		{
			cout << "ctor called" << endl;
		}

		~Test()
		{
			cout << "dtor called" << endl;
		}

		friend void fun(Test t)
		{
			Test();
			t.~Test();
		}

};

int main()
{
	Test();
	Test t;
	fun(t);
	return 0;
}
