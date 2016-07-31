//commit for git credential helper
#include<iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
		}

		virtual ~Base() //ensures to invoke actual object destructor
		{
		}

		virtual void changeAttributes() = 0;

		//the virtual constructor
		static Base* create(int id);

		//the virtual copy constructor
		virtual Base* clone() = 0;

};

class Derived1 : public Base
{
	public:
		Derived1()
		{
			cout << "Derived1 created" << endl;
		}



