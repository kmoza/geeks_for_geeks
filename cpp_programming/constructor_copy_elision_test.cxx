#include<iostream>

using namespace std;

class B
{
	public:
		B(const char* str="\0")
		{
			cout << "constructor called" << endl;
		}

		B(const B &b)
		{
			cout << "copy constructor called" << endl;
		}

};

int main()
{
	B ob = "copy me";
	return 0;
}
