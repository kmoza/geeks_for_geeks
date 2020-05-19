#include<iostream>

using namespace std;

class Base
{
	public:
		virtual void show()
		{
			cout << "In base() " << endl;

		}

};

class Derived : public Base
{
	int x;

	public:
		void show()
		{
			cout << "In derived " << endl;
		}

		Derived()
		{
			x = 10;
		}

		int getX() const
		{
			return x;
		}
};

int main()
{
	Derived  d;
	Base *bp = &d;
	bp->show();
	cout << bp->getX() << endl;
	return 0;
}
