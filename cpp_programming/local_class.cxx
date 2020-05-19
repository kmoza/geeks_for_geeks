#include<iostream>

using namespace std;

void fun()
{
	class Test
	{
		public:
			void method()
			{
				cout << "local class method" << endl;
			}

			static void static_method()
			{
				cout << "static method" << endl;
			}
	};

	Test t;
	t.method();
	Test::static_method();
}

int main()
{
	fun();
	return 0;
}
