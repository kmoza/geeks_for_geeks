#include<iostream>

using namespace std;

class Test
{
	private:
		int *ptr;

	public:
		Test(int i = 0)
		{
			ptr = new int(i);
		}

		void setValue(int i)
		{
			*ptr = i;
		}

		void print()
		{
			cout << *ptr << endl;
		}

		//deep copy using assignment operator
		Test& operator= (const Test &t);
};

Test& Test::operator=(const Test& t)
{
	//check for self assignment
	if(this != &t)
	{
		*ptr = *(t.ptr);
	}

	return *this;
}


int main()
{
	Test t1(5);
	Test t2;
	t2 = t1;
	t1.setValue(10);
	t2.print();
	t1.print();
	return 0;
}

