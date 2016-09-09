#include<iostream>

using namespace std;

class A
{
	public:
		A()
		{
			cout << "A constructor" << endl;
		}

		A(const A& a) 
		{
			cout << "A copy constructor" << endl;
		}

		A& operator=(const A& a)
		{
			if(this == &a)
			{
				return *this;
			}

			cout << "A assignment operator" << endl;

			return *this;
		}

};

class B
{
	A a;

	public:
		B(A& a)
		{
			this->a = a;
			cout << "B constructor" << endl;
		}

};

int main()
{
	A a1;
	B b(a1);
	return 0;
}
