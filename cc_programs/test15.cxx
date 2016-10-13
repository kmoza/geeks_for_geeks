#include<iostream>
#include<cstdlib>
#include<memory>

using namespace std;

struct Foo
{
	Foo()
	{
		cerr << "Foo [" << this << "] constructed" << endl;
	}

	virtual ~Foo()
	{
		cerr << "Foo [" << this << "] destructed" << endl;
	}
};

int main()
{
	
	{
		unique_ptr<Foo> fp(new Foo());

		//unique_ptr<Foo> fp2(fp);

		unique_ptr<Foo> fp3;

		//fp3 = fp;

		cerr << "Exiting scope" << endl;
	}

	return 0;
}

