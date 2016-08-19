#include<iostream>

using namespace std;

template<class T, class U = char>
class A
{
	private:
		T x;
		U y;

	public:
		A()
		{
			cout << "constructor called" << endl;
		}
};

int main()
{
	A<char> a;
	A<int,double> b;
	return 0;
}
