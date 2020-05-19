#include<iostream>

using namespace std;

class Enclosing
{
	int x;

	class Nested
	{
		int y;

		void nestedFun(Enclosing *e)
		{
			cout << e->x << endl;
		}
	};
};

int main()
{
	return 0;
}
