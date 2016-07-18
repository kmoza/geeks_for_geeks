#include<iostream>

using namespace std;

class A
{
	private:
		int i;

	public:
		A(int i)
		{
			this->i = i;
		}

		int getI()
		{
			return i;
		}
};

int main()
{
	A obj(10);
	cout << obj.getI() << endl;
	return 0;
}
