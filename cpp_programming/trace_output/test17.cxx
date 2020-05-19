#include<iostream>

using namespace std;

class A
{
	int aid;

	public:
		A(int x)
		{
			aid = x;
		}

		void print()
		{
			cout << "A::aid = " << aid << endl;
		}

};

class B
{
	int bid;

	public:
		static A a;
		B(int i)
		{
			bid = i;
		}
};

A B::a(10);

int main()
{
	B b(10);
	b.a.print();
	return 0;
}
