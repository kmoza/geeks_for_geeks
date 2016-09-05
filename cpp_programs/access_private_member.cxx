#include<iostream>

using namespace std;

class Test
{
	private:
		int data;
		int data2;

	public:
		Test()
		{
			data = 0;
			data2 = 100;
		}

		int getData()
		{
			return data;
		}
};

int main()
{
	Test t;

	int* ptr = (int*)&t;

	*ptr = 10;

	cout << t.getData() << endl;
	cout << *ptr << endl;

	return 0;
}
