#include<iostream>

using namespace std;

class Test
{
	virtual void tet()
	{
	}
};


int main()
{
	cout << sizeof(Test) << endl;
	return 0;
}
