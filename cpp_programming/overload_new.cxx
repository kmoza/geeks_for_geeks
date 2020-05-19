#include<iostream>

using namespace std;

class Test
{
	private:
		void* operator new(size_t size);
		int x;

	public:
		Test()
		{
			x = 9;
			cout << "constructor called" << endl;
		}

		void display()
		{
			cout << "x = " << x << endl;
		}

		~Test()
		{
			cout << "destructor called" << endl;
		}
};

int main()
{
	//Test * obj = new Test();

	Test t;
	t.display();
	return 0;
}
