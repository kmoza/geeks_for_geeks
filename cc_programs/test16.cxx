//code to test source and sink idiom and move semantics of c++11

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

void sink(unique_ptr<Foo> p)
{
	cerr << "Sink owns Foo [" << p.get() << "]" << endl;
}

unique_ptr<Foo> source()
{
	cerr <<"Creating Foo in source" << endl;
	return unique_ptr<Foo>(new Foo);
}

int main()
{
	cerr << "Calling source" << endl;
	unique_ptr<Foo> pmain = source();

	cerr << "Now pmain owns Foo [" << pmain.get() << endl;

	cerr << "Passing it to sink" << endl;
	
	//sink(pmain);
	sink(move(pmain));

	cerr << "Main done" << endl;
	return 0;
}

