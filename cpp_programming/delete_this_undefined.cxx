#include<iostream>

using namespace std;

class A
{
	int x;

	public:
		A()
		{
			x = 10;
		}

		void fun()
		{
			delete this;
			
			//invalid:undefined behaviour
			cout << x << endl;
		}
};

int main()
{
	A *a_obj = new A();
	a_obj->fun();

	//delete one more time and produce undefined behaviour
	a_obj->fun();
	return 0;
}
