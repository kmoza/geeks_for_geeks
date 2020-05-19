#include<iostream>

using namespace std;

class Test
{
	private:
		~Test()
		{
		}
};

int main()
{
	//Test t;
	Test *t = new Test();
	delete t;
}
