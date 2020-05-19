#include<iostream>

using namespace std;

class Test
{
	private:
		const int t;

	public:
		Test(int t):t(t)
		{
			//t = t;
		}

};

int main()
{
	Test obj1(10);
	return 0;
}
