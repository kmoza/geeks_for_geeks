#include<iostream>

using namespace std;

class Test
{
	private:
		static int count;
		int id;

	public:
		Test()
		{
			count++;
			id = count;
			cout << "constructing object number" << id << endl;
		
		if(id == 4)
		{
			throw 4;
		}
		}

		~Test()
		{
			cout << "destructing object number" << id << endl;
			id--;
		}
};

int Test::count = 0;

int main()
{
	try
	{
		Test array[5];
	}
	catch(int i)
	{
		cout << "caught exception " << i << endl;
	}
	return 0;
}
