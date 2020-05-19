#include<iostream>

using namespace std;

class Test
{
	private:
		int x;
		int y;

	public:
		Test(int xx, int yy) : x(xx), y(yy)
		{
			cout << "constructor called" << "x = " << x << " y = " << y << endl;
		}

};


int main()
{
	Test t(10,20);
	return 0;
}		
