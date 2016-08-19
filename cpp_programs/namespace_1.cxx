#include<iostream>
using namespace std;

namespace first
{
	int val = 500;
}

namespace first
{
	double d_val = 10.32;
}

int val = 100;

int main()
{
	int val = 200;

	cout << first::val << endl;
	cout << first::d_val << endl;
	return 0;
}
