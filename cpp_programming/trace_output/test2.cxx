#include<iostream>

using namespace std;

class A
{
	public:
		A(int i = 0) : i(i)
		{
		}

		void show()
		{
			cout << "i = " << i << endl;
		}

	private:
		int i;
};

class B
{
	public:
		B(int x) : x(x)
		{
		}

		operator A() const
		{
			return A(x);
		}

	private:
		int x;
};

void g(A a)
{
	a.show();
}


int main()
{
	B b(10);
	g(b);
	g(20);
	return 0;
}
