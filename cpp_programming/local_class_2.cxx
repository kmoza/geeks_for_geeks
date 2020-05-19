#include<iostream>

using namespace std;

void fun()
{
	static int x;
	enum {i=1,j=2};

	class Test
	{
		public:
			void method()
			{
				cout << "x = " << x << endl;
				cout << "i = " << i << endl;
			}
	};


	Test t;
	t.method();
}

int main()
{
	fun();
	return 0;
}
