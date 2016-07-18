#include<iostream>

using namespace std;

class A
{
	private:
		int a;

	public:
		A(int a)
		{
			this->a = a;
			cout << "a's constuctor called" << endl;
		}

		A(const A& temp)
		{
			a = temp.a;
			cout << "a's copy constructor called" << endl;
		}

		~A()
		{
			cout << "a's desctructor called" << endl;
		}

};

class B:A
{
	private:

	public:
		B(int arg):A(arg)
		{
			cout << "B's constructor called" << endl;
		}
};

int main()
{
	B obj(10);
	return 0;
}
