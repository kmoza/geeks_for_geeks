#include<iostream>

using namespace std;

class B
{
};

class D : public B
{
};

int main()
{
	B *b = new D;

	D *d = dynamic_cast<D*>(b);

	if(d!= NULL)
	{
		cout << "works" << endl;
	}
	else
	{
		cout << "cannot cast B* to D*"<< endl;
	}

	return 0;
}
