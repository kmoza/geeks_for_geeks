#include<iostream>

using namespace std;

class Test
{
	private:
		int x;

	public:
		Test()
		{
			cout << "default constructor called" << endl;
		}

		Test(const Test& temp)
		{
			cout << "copy constructor called" << endl;
		}

		//overload assignment operator
		void operator=(const Test& temp)
		{
			cout << "assignment operator called" << endl;
		}

};

Test fun()
{
	cout << "fun called" << endl;
	Test temp;
	return temp;
}

int main()
{
	Test t1;
	Test t2 = fun();
	Test t3;
	t3 = fun();
	return 0;
}
