#include<iostream>

using namespace std;

class Test
{
	int &t;

	public:
	Test(int &t):t(t)
	{
	}

};

int main()
{
	int x = 20;
	Test obj1(x);
	return 0;
}
