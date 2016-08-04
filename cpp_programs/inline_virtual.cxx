#include<iostream>

using namespace std;
//by default all functions defined inside a class are virtual functions
class Base
{
	public:
		virtual void who()
		{
			cout << "I am base" << endl;
		}

};

class Derived : public Base
{
	public:
		void who()
		{
			cout << "I am derived" << endl;
		}
};

int main()
{
	Base b;
	b.who();

	Base *ptr = new Derived();
	ptr->who();

	return 0;
}
