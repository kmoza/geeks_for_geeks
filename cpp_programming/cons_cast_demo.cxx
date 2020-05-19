#include<iostream>
using namespace std;

class student
{
	private:
		int roll;

	public:
		student(int r):roll(r)
		{
		}

		void fun() const
		{
			(const_cast<student*>(this))->roll = 5;
		}

		int getRoll()
		{
			return roll;
		}

};

int main()
{
	student s(3);

	cout << "old roll number" <<  s.getRoll() << endl;

	s.fun();

	cout << "new roll number" << s.getRoll() << endl;

	return 0;
}


			 
