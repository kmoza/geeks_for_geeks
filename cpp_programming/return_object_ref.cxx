#include<iostream>

using namespace std;

class Test
{
	public:
		Test& retRef()
		{
			return *this;
		}
};

int main()
{
	Test obj1;
	obj1 = obj1.retRef();
	return 0;
}
