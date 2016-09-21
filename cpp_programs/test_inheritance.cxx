#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void f1()
		{
			cout << "base f1" << endl;
		}

		virtual void f2()
		{
			cout << "base f2" << endl;
		}

		virtual void f3()
		{
			cout << "base f3" << endl;
		}

};


class Derived : public Base
{
	public:
		void f1()
		{
			cout << "derived f1" << endl;
		}

		void f3()
		{
			cout << "derived f3" << endl;
		}
};

int main()
{
	Base *bp = new Derived;
	bp->f1();
	bp->f2();
	bp->f3();
	return 0;
}
