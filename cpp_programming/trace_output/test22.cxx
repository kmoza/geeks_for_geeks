#include<cstdlib>
#include<iostream>

using namespace std;

class Test
{
	public:
		void* operator new(size_t size);
		void operator delete(void*);
		Test()
		{
			cout << "constructor called" << endl;
		}


		~Test()
		{
			cout << "destructor called" << endl;
		}
};

void* Test::operator new(size_t size)
{
	cout << "new called" << endl;
	void* storage = malloc(size);
	cout << "size = " << size << endl;
	return storage;
}

void Test::operator delete(void* p)
{
	cout << "delete called" << endl;
	free(p);
}

int main()
{
	Test *m = new Test();
	delete m;
	return 0;
}

