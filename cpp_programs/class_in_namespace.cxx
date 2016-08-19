#include<iostream>
using namespace std;

namespace ns
{
	class geek
	{
		public:
			void display()
			{
				cout << "ns::geek::display()" << endl;
			}
	};
}

int main()
{
	ns::geek obj;
	obj.display();

	return 0;
}
