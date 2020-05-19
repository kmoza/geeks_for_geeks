#include<iostream>

using namespace std;

class Test
{
	private:
		static int count;

	public:
		static Test& fun();

};


int Test::count = 0;

Test& Test::fun()
{
	Test::count++;
	cout << Test::count << endl;
	return *this;
}

int main()
{
	Test t;
	t.fun().fun().fun().fun();
	return 0;
}
