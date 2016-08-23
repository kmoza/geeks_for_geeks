#include<iostream>
#include<typeinfo>

using namespace std;

int main()
{
	int a1 = 40;
	const volatile int* b1 = &a1;
	cout << "typeid of b1 " << typeid(b1).name() << endl;

	int* c1 = const_cast<int*>(b1);
	cout << "typeid of c1 " << typeid(c1).name() << endl;

	return 0;
}
