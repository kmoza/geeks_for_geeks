#include<iostream>

using namespace std;

class base
{
	public:
		base()
		{
			cout << "constructing base" << std::endl;
		}

		virtual ~base()
		{
			cout << "destructing base" << std::endl;
		}

};


class derived : public base
{
	public:
		derived()
		{
			cout << "constructing derived" << endl;
		}

		~derived()
		{
			cout << "destructing derived" << endl;
		}
};

int main()
{

	derived *d = new derived();

	base *b = d;
	delete b;
	return 0;
}
