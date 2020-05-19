#include<iostream>

using namespace std;

class Test
{
	private:
		~Test()
		{
			cout << "destroying object" << endl;
		}

	public:
		Test()
		{
			cout << "object created" << endl;
		}

		//friend void destructTest(Test*);
};

/*void destructTest(Test* ptr)
{
	delete ptr;

	cout << "object destroyed" << endl;
}
*/

class DerivedTest : public Test
{

};

int main()
{
	Test *ptr = new Test;

	//destructTest(ptr);

	//Test t1;

	//delete ptr;

	return 0;
}
