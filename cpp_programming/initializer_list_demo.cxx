#include<iostream>

using namespace std;

class Test
{
	private:
		int x;
	public:
		Test()
		{
		}
		
		//constructor with initializer list
		Test(int x):x(x)
		{
		}

		void print()
		{
			cout << "x = " << x << endl;
		}
};

int main()
{
	Test obj1;
	Test obj2(10);
	obj1.print();
	obj2.print();
	return 0;
}
