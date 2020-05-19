#include<iostream>

using namespace std;

int x = 20;

namespace outer
{
	int x = 10;

	namespace inner
	{
		int z = x;
	}
}

int main()
{
	cout << outer::inner::z << endl;
	return 0;
}
